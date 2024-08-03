void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FF5E8 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_12591/*"Servants"*/, v5);
    sub_1B640C8(&StringLiteral_16460/*"_blurOnOff"*/, v6);
    sub_1B640C8(&StringLiteral_16486/*"_mapIdVal"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FF5E8 = 1;
  }
  v9 = StringLiteral_12591/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12591/*"Servants"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceTypeName, v9, v2, v3);
  v10 = StringLiteral_16486/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16486/*"_mapIdVal"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reelUvIdKey, v10, v11, v12);
  v13 = StringLiteral_16460/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16460/*"_blurOnOff"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reelBlurKey, v13, v14, v15);
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceDataStr, v16, v17, v18);
  v19 = (struct System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceIdArray, (int32_t)v19, v20, v21);
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
  if ( (byte_49FF5E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, list);
    this = (SlotEffectComponent_o *)sub_1B640C8(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, v7);
    byte_49FF5E3 = 1;
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
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
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
    sub_1B64324(this);
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
  __int64 v8; // x1

  v6 = this;
  if ( (byte_49FF5E2 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1B640C8(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, list);
    byte_49FF5E2 = 1;
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
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
        sub_1B6432C(this, v8);
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
    sub_1B64324(this);
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

  if ( (byte_49FF5E6 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1B640C8(&Method_SlotEffectComponent_PlaySe__, seName);
    byte_49FF5E6 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B64324(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
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
    sub_1B6432C(v7, leftReelList);
  OverwriteAssetSoundName__PlaySe_38216620(
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
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x20
  System_String_o *v9; // x19
  SeManager_c *v10; // x0
  float DEFAULT_VOLUME; // s8

  v4 = this;
  if ( (byte_49FF5E7 & 1) == 0 )
  {
    sub_1B640C8(&SeManager_TypeInfo, *(_QWORD *)&index);
    this = (SlotEffectComponent_o *)sub_1B640C8(&SoundManager_TypeInfo, v5);
    byte_49FF5E7 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1B64324(this);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1B6432C(this, *(_QWORD *)&index);
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
    SoundManager__playVoice_38387180(voiceDataStr, v9, DEFAULT_VOLUME, 0LL, 0LL);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_49FF5E5 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, method);
    byte_49FF5E5 = 1;
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
  int32_t v30; // w3
  char *Item; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v36; // x22
  System_Collections_Generic_List_object__o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  struct System_Object_array *resultVoiceIdArray; // x24
  char *v41; // x21
  __int64 v42; // x23
  System_Collections_Generic_Dictionary_object__object__o *v43; // x22
  __int64 methodPtr_low; // x9
  int32_t v45; // w2
  int v46; // w8
  __int64 v47; // x9
  __int64 v48; // x23
  int32_t v49; // w2
  int32_t v50; // w3
  char *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_String_array **p_voiceIdArray; // x20
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x20
  SlotEffectComponent_o *v58; // x0
  System_Int32_array *v59; // x1
  System_Int32_array *v60; // x2
  System_Int32_array *v61; // x3
  const MethodInfo *v62; // x4
  int32_t v63; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF5E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Shuffle_object___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_BasicHelper_Shuffle_string___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__AddRange__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__Clear__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_object___ctor___75660256, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Item__, v19);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1B640C8(&SoundManager_TypeInfo, v22);
    sub_1B640C8(&string___TypeInfo, v23);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v24);
    sub_1B640C8(&StringLiteral_24487/*"voice"*/, v25);
    byte_49FF5E1 = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v63 = svtId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  v28 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, voiceTypeName, v27, 0LL);
  this->fields.voiceDataStr = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voiceDataStr, (int32_t)v28, v29, v30);
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
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v37 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v37,
                   (const MethodInfo_2E28FC8 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v41 = Item;
  v42 = sub_1B64314(System_Collections_Generic_List_object__TypeInfo, v38, v39);
  System_Collections_Generic_List_object____ctor_55234320(
    (System_Collections_Generic_List_object__o *)v42,
    resultVoiceIdArray->max_length,
    (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_object___ctor___75660256);
  if ( !v42 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v42,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v42,
                   v36,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
  v43 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * methodPtr_low
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v45 = *(_DWORD *)(v42 + 24);
  v46 = *(_DWORD *)(v42 + 28) + 1;
  *(_DWORD *)(v42 + 24) = 0;
  *(_DWORD *)(v42 + 28) = v46;
  if ( v45 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v42 + 16), 0, v45, 0LL);
  if ( !v43 )
LABEL_29:
    sub_1B64324(Item);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v43,
                   (Il2CppObject *)StringLiteral_24487/*"voice"*/,
                   (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v47 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v47
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v47 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1B645E4(Item);
      SlotEffectComponent__SetReelVal(v58, v59, v60, v61, v62);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_2E28FC8 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v48 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1B64170(string___TypeInfo, 2LL);
  if ( !Item )
    goto LABEL_29;
  v51 = Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v41,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(Item + 32), (int32_t)v41, v49, v50),
        *((_DWORD *)v51 + 6) <= 1u) )
  {
LABEL_30:
    sub_1B6432C(Item, v32);
  }
  *((_QWORD *)v51 + 5) = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 40), v48, v52, v53);
  this->fields.voiceIdArray = (struct System_String_array *)v51;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_voiceIdArray, (int32_t)v51, v55, v56);
  v57 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v57, endCb, 1, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *animationName; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v14; // x19
  _BOOL8 v15; // x0
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF5E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, animCallback);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_25005/*"{0}{1}"*/, v9);
    byte_49FF5E4 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallback,
    (int32_t)animCallback,
    (int32_t)method,
    v3);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType);
  v12 = System_String__Format_61389768((System_String_o *)StringLiteral_25005/*"{0}{1}"*/, animationName, v11, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v14 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v15 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, v12, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(v15);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( v15 )
  {
    if ( !v14 )
      goto LABEL_14;
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v14, v12, 0LL);
  }
}