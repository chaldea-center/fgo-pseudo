void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x19
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4C1E7BF & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, v1);
    sub_1C3B764(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_20499/*"isVisible"*/, v3);
    sub_1C3B764(&StringLiteral_20497/*"isUseHoldReinforcements"*/, v4);
    sub_1C3B764(&StringLiteral_20496/*"isUseEventUI"*/, v5);
    sub_1C3B764(&StringLiteral_20494/*"isStorage"*/, v6);
    sub_1C3B764(&StringLiteral_20491/*"isSkillShiftInfo"*/, v7);
    sub_1C3B764(&StringLiteral_20498/*"isUsingAlternateTypeface"*/, v8);
    sub_1C3B764(&StringLiteral_20492/*"isStatic"*/, v9);
    sub_1C3B764(&StringLiteral_20495/*"isTerminalLogin"*/, v10);
    sub_1C3B764(&StringLiteral_20493/*"isStop"*/, v11);
    byte_4C1E7BF = 1;
  }
  v12 = sub_1C3B80C(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_1C3B9C0(0LL, v13);
  v20 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  v21 = StringLiteral_20498/*"isUsingAlternateTypeface"*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_20498/*"isUsingAlternateTypeface"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), v21, v14, v15, v16, v17, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_14;
  v28 = StringLiteral_20491/*"isSkillShiftInfo"*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_20491/*"isSkillShiftInfo"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 40), v28, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_14;
  v35 = StringLiteral_20492/*"isStatic"*/;
  *(_QWORD *)(v20 + 48) = StringLiteral_20492/*"isStatic"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 48), v35, v29, v30, v31, v32, v33, v34);
  if ( *(_DWORD *)(v20 + 24) <= 3u )
    goto LABEL_14;
  v42 = StringLiteral_20493/*"isStop"*/;
  *(_QWORD *)(v20 + 56) = StringLiteral_20493/*"isStop"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 56), v42, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v20 + 24) <= 4u )
    goto LABEL_14;
  v49 = StringLiteral_20494/*"isStorage"*/;
  *(_QWORD *)(v20 + 64) = StringLiteral_20494/*"isStorage"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 64), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v20 + 24) <= 5u )
    goto LABEL_14;
  v56 = StringLiteral_20495/*"isTerminalLogin"*/;
  *(_QWORD *)(v20 + 72) = StringLiteral_20495/*"isTerminalLogin"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 72), v56, v50, v51, v52, v53, v54, v55);
  if ( *(_DWORD *)(v20 + 24) <= 6u
    || (v63 = StringLiteral_20496/*"isUseEventUI"*/,
        *(_QWORD *)(v20 + 80) = StringLiteral_20496/*"isUseEventUI"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 80), v63, v57, v58, v59, v60, v61, v62),
        *(_DWORD *)(v20 + 24) <= 7u)
    || (v70 = StringLiteral_20497/*"isUseHoldReinforcements"*/,
        *(_QWORD *)(v20 + 88) = StringLiteral_20497/*"isUseHoldReinforcements"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 88), v70, v64, v65, v66, v67, v68, v69),
        *(_DWORD *)(v20 + 24) <= 8u) )
  {
LABEL_14:
    sub_1C3B9C8(v12, v13);
  }
  v77 = StringLiteral_20499/*"isVisible"*/;
  *(_QWORD *)(v20 + 96) = StringLiteral_20499/*"isVisible"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 96), v77, v71, v72, v73, v74, v75, v76);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v20;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)SupportSelectItemDraw_TypeInfo->static_fields,
    v20,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
}


void __fastcall SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x21
  __int64 methodPtr_low; // x9
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C1E7BE & 1) == 0 )
  {
    sub_1C3B764(&System_IDisposable_TypeInfo, method);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_Transform_TypeInfo, v5);
    byte_4C1E7BE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C3B9C0(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3BC80(v18);
LABEL_37:
      sub_1C3B9C0(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1C3B9C0(0LL, v22);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v25, 0LL) )
    {
      v26 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v26 )
        sub_1C3B9C0(0LL, v27);
      UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    }
  }
  v28 = sub_1C3B8A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1C8D744(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UISprite_o *v25; // x8
  struct UIAtlas_o *v26; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *v35; // x1
  System_Collections_Generic_List_object__o *v36; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1E7B6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1E7B6 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v16 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v16 )
      goto LABEL_37;
    mAtlas = v16->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
      (int64_t)mAtlas,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_37;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v25 = this->fields.baseSprite;
    if ( !v25 )
      goto LABEL_37;
    v26 = v25->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v26;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.baseDefaultUIAtlas,
      (int64_t)v26,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v34 = this->fields.base2Sprite;
    if ( v34 )
    {
      v35 = v34->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v35;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.base2DefaultUIAtlas,
        (int64_t)v35,
        (int64_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      goto LABEL_36;
    }
LABEL_37:
    sub_1C3B9C0(transform, v6);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v28);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v36;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.switchSkillUIList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4C1E7B7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1E7B7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C3B9C0(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C1E7B9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1E7B9 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C1E7BC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, flag);
    byte_4C1E7BC = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetEquipAlpha(
        SupportSelectItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4C1E7BD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1E7BD = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v7->klass->vtable._8_set_alpha.method)(
      v7,
      v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantData_o *v8; // x20
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 gameObject; // x0
  struct UIWidget_o *v52; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v55; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v60; // x21
  __int64 v61; // x23
  __int64 v62; // x24
  Il2CppObject *v63; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v68; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v70; // x25
  int32_t atk; // w8
  int hp; // w8
  char v73; // w26
  UISprite_o *backClassIcon; // x21
  __int64 v75; // x8
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v77; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v80; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x22
  UnityEngine_Object_o *servantClassIcon; // x21
  UnityEngine_Object_o *levelLabel; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *attackLabel; // x21
  UnityEngine_Object_o *hpLabel; // x21
  UnityEngine_Object_o *sortieMaskSprite; // x21
  UnityEngine_Object_o *skillListTreasureDevice; // x21
  UnityEngine_Object_o *appendSkillList; // x21
  UnityEngine_Object_o *svtCommandCardList; // x21
  UnityEngine_Object_o *friendPointBonusBase; // x21
  bool v92; // w22
  UISprite_o *equipSprite; // x21
  __int64 v94; // x23
  __int64 v95; // x24
  int32_t v96; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x23
  int32_t v98; // w24
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  int limitCount; // w19
  bool v101; // cc
  UserServantEntity_o *v102; // x23
  int32_t v103; // w8
  int v104; // w8
  UnityEngine_Object_o *v105; // x21
  int adjustAtk; // w9
  int32_t v107; // w0
  int32_t exceedCount; // w22
  int32_t v109; // w23
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_41980756; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v115; // x24
  System_Collections_Generic_List_object__o *v116; // x26
  struct EventUpValSetupInfo_o *v117; // x8
  struct System_Int32_array *v118; // x20
  __int64 v119; // x8
  unsigned __int64 v120; // x29
  int32_t v121; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v123; // x0
  int32_t eventSvtPoint; // w21
  __int64 v125; // x24
  __int64 v126; // x25
  int32_t v127; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v130; // x21
  EventPersonalMargeUpValInfo_o *v131; // x27
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x8
  __int64 v139; // x23
  unsigned __int64 v140; // x21
  struct System_Object_array *items; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  int v145; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v148; // w29
  SupportServantData_o *v149; // x21
  int v150; // w20
  QuestRestrictionInfo_o *v151; // x8
  int32_t v152; // w21
  int32_t v153; // w27
  QuestRestrictionInfo_o *v154; // x22
  __int64 v155; // x23
  __int64 v156; // x24
  int32_t v157; // w0
  int32_t v158; // w23
  int32_t v159; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v161; // w9
  int32_t v162; // w0
  Il2CppObject v163; // q1
  int64_t v164; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v167; // x25
  bool EventUpVal_41682044; // w19
  Il2CppObject *v169; // x29
  Il2CppObject *v170; // x28
  System_Collections_Generic_List_object__o *v171; // x22
  struct EventUpValSetupInfo_o *v172; // x8
  struct System_Int32_array *v173; // x20
  __int64 v174; // x8
  unsigned __int64 v175; // x21
  int32_t v176; // w23
  __int128 v177; // q0
  int64_t v178; // x24
  int32_t v179; // w4
  int32_t BuddyPoint; // w27
  int32_t v181; // w0
  EventServantPointRankEntity_o *v182; // x0
  int32_t v183; // w25
  EventMargeItemUpValInfo_o *v184; // x24
  EventPersonalMargeUpValInfo_o *v185; // x27
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  __int64 v192; // x8
  __int64 v193; // x23
  unsigned __int64 v194; // x19
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  Il2CppClass **v198; // x0
  UnityEngine_Object_o *v199; // x21
  int32_t v200; // w19
  UnityEngine_Object_o *v201; // x21
  UILabel_o *v202; // x21
  UnityEngine_Object_o *v203; // x21
  int32_t v204; // w19
  int32_t v205; // w21
  _BOOL4 v206; // w26
  System_String_o *Icon_39123920; // x21
  int v208; // w29
  _BOOL4 v209; // w25
  int v210; // w24
  int32_t RarityIcon; // w22
  int32_t v212; // w22
  UISprite_o *v213; // x23
  float v214; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v217; // x21
  SkillListTreasureDeviceComponent_o *v218; // x21
  SkillInfo_array *v219; // x22
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  __int64 v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  __int64 v229; // x8
  UnityEngine_Object_o *v230; // x21
  AppendSkillListComponent_o *v231; // x21
  SkillInfo_array *v232; // x22
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  __int64 v239; // x8
  _QWORD *v240; // x9
  __int64 v241; // x10
  __int64 v242; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  struct System_Collections_Generic_List_UIWidget__o *v244; // x0
  SwitchUIWidgetComponent_o *v245; // x21
  UnityEngine_Object_o *v246; // x21
  UnityEngine_Object_o *v247; // x21
  float v248; // s1
  float v249; // s2
  float v250; // s0
  float v251; // s3
  UILabel_o *v252; // x21
  UnityEngine_Object_o *v253; // x21
  float v254; // s1
  float v255; // s2
  float v256; // s0
  float v257; // s3
  UILabel_o *v258; // x21
  UnityEngine_Object_o *v259; // x21
  UISprite_o *v260; // x22
  UIAtlas_o *v261; // x21
  UnityEngine_Object_o *v262; // x21
  UISprite_o *v263; // x22
  UIAtlas_o *v264; // x21
  const MethodInfo *v265; // x4
  UnityEngine_Object_o *v266; // x21
  System_String_o *v267; // x0
  System_String_o *v268; // x1
  bool v269; // w2
  SupportSelectItemDraw_o *v270; // x0
  bool v271; // w3
  UnityEngine_Object_o *v272; // x21
  bool v273; // w1
  System_String_o *v274; // x0
  const MethodInfo *v275; // x3
  System_String_o *v276; // x21
  __int64 v277; // x2
  __int64 v278; // x3
  __int64 v279; // x4
  Il2CppObject *v280; // x0
  UnityEngine_Object_o *v281; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v283; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v286; // x25
  __int64 v287; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v291; // x8
  EventCampaignEntity_o *v292; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v294; // w10
  System_Collections_Generic_List_object__o *v295; // x0
  System_Collections_Generic_List_object__o *v296; // x24
  UISprite_o *v297; // x21
  void *v298; // x23
  Il2CppClass *v299; // x24
  int32_t v300; // w23
  UnityEngine_Object_o *v301; // x21
  void *v302; // x21
  Il2CppClass *v303; // x23
  int v304; // w21
  UnityEngine_Object_o *v305; // x21
  struct ServantLeaderInfo_o *v306; // x8
  __int64 v307; // x21
  __int64 v308; // x22
  EventMargeItemUpValInfo_array *v309; // x19
  int32_t v310; // w21
  int32_t v311; // w0
  UnityEngine_Object_o *v312; // x21
  bool v313; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v315; // x21
  __int64 v316; // x22
  int32_t v317; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v323; // x25
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  struct System_Object_array *v330; // x8
  _QWORD *v331; // x9
  __int64 v332; // x10
  Il2CppClass **v333; // x0
  _BOOL4 v334; // [xsp+10h] [xbp-1B0h]
  bool v335; // [xsp+14h] [xbp-1ACh]
  int32_t v336; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v337; // [xsp+18h] [xbp-1A8h]
  int32_t v338; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v345; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v347; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v348; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v349; // [xsp+40h] [xbp-180h]
  bool v350; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v354; // [xsp+58h] [xbp-168h]
  Il2CppObject *v355; // [xsp+60h] [xbp-160h]
  Il2CppObject *v356; // [xsp+68h] [xbp-158h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+70h] [xbp-150h]
  UserServantEntity_o *v358; // [xsp+70h] [xbp-150h]
  int32_t FrameType; // [xsp+7Ch] [xbp-144h]
  EventCampaignEntity_array *v360; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v361; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v362; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v363; // [xsp+90h] [xbp-130h]
  Il2CppObject *v364; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v365; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v366; // [xsp+A0h] [xbp-120h]
  int v367; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v368; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v370; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v371; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v372; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v374; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v377; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  UnityEngine_Vector3_o v389; // 0:s0.4,4:s1.4,8:s2.4

  v8 = supportServantData;
  if ( (byte_4C1E7B8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1C3B764(&AtlasManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_1C3B764(&Method_DataManager_GetMaster_EventDetailMaster___, v15);
    sub_1C3B764(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantExceedMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1C3B764(&DataManager_TypeInfo, v20);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_1C3B764(&EventMargeItemUpValInfo_TypeInfo, v24);
    sub_1C3B764(&EventPersonalMargeUpValInfo_TypeInfo, v25);
    sub_1C3B764(&int_TypeInfo, v26);
    sub_1C3B764(&long___TypeInfo, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Clear__, v30);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v33);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77846616, v35);
    sub_1C3B764(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v36);
    sub_1C3B764(&LocalizationManager_TypeInfo, v37);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v38);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
    sub_1C3B764(&Rarity_TypeInfo, v41);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1C3B764(&SupportSelectItemDraw_TypeInfo, v44);
    sub_1C3B764(&TutorialFlag_TypeInfo, v45);
    sub_1C3B764(&StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v46);
    sub_1C3B764(&StringLiteral_10484/*"PreserveSig"*/, v47);
    sub_1C3B764(&StringLiteral_6587/*"FifthFeedNodeName"*/, v48);
    sub_1C3B764(&StringLiteral_405/*"#0039E2"*/, v49);
    sub_1C3B764(&StringLiteral_1/*""*/, v50);
    byte_4C1E7B8 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v377 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v374 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_543;
  size = switchSkillUIList->fields._size;
  v55 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v55;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_543;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v8 )
    goto LABEL_543;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v8, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
  v360 = eventFriendPoints;
  if ( gameObject )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_543;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_543;
      v60 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v62 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v380.fields.currentCryptoKey = v62;
      *(_QWORD *)&v380.fields.fakeValue = v61;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v380, 0LL);
      if ( !v60 )
        goto LABEL_543;
      v63 = 0LL;
      v356 = DataMasterBase_object__object__int___GetEntity(
               v60,
               gameObject,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_543;
    v63 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v63 )
      goto LABEL_543;
    v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v63[5].klass;
    monitor = v63[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v381.fields.currentCryptoKey = klass;
    *(_QWORD *)&v381.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v381, 0LL);
    if ( !v65 )
      goto LABEL_543;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v65,
                            gameObject,
                            (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v63 = 0LL;
  }
  equipTarget1 = 0LL;
  v356 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v361 = 0LL;
    v73 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v361 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v73 = 0;
LABEL_47:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    backClassIcon = this->fields.backClassIcon;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v75 = **(_QWORD **)(gameObject + 184);
    if ( !v75 )
      goto LABEL_543;
    if ( *(_DWORD *)(v75 + 24) <= (unsigned int)classPos )
      goto LABEL_544;
    if ( !backClassIcon )
      goto LABEL_543;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v75 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v77 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v77, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v80 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v80, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_543;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_543;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_543;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v52);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_543;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v362 = 0LL;
    v92 = 0;
    if ( v63 )
      goto LABEL_460;
LABEL_122:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    if ( v361 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v95 = *(_QWORD *)&v361->fields.svtId.fields.currentCryptoKey;
      v94 = *(_QWORD *)&v361->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v382.fields.currentCryptoKey = v95;
      *(_QWORD *)&v382.fields.fakeValue = v94;
      v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v382, 0LL);
      ImagePartsGroupIdxs_k__BackingField = v361->fields._ImagePartsGroupIdxs_k__BackingField;
      v98 = v96;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v98, ImagePartsGroupIdxs_k__BackingField, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_543;
        limitCount = v361->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v356 )
            goto LABEL_543;
          v101 = SLODWORD(v356[5].monitor) < limitCount;
LABEL_478:
          v52 = (struct UIWidget_o *)!v101;
LABEL_481:
          if ( !gameObject )
            goto LABEL_543;
LABEL_482:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v52, 0LL);
          goto LABEL_483;
        }
        goto LABEL_475;
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v105 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_543;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_543;
        LOBYTE(v52) = 0;
        goto LABEL_482;
      }
    }
    goto LABEL_483;
  }
  v68 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v68,
                          (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_543;
  v365 = (ServantEntity_o *)gameObject;
  v354 = UserServantLeaderEntity;
  v355 = v63;
  svtId = v68;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v8->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v348 = this;
    if ( !servantLeaderInfo )
      goto LABEL_543;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v70 = v365;
    lv[1] = servantLeaderInfo->fields.lv;
    atk = servantLeaderInfo->fields.atk;
    lv[0] = atk;
    if ( equipTarget1 )
    {
      lv[0] = equipTarget1->fields.atk + atk;
      hp = equipTarget1->fields.hp + servantLeaderInfo->fields.hp;
    }
    else
    {
      hp = servantLeaderInfo->fields.hp;
    }
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    v377 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v347 = adjustAtk;
    v107 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v109 = v107;
    FrameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_543;
    strengthStatus = tdInfo->fields.strengthStatus;
    v345 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_41993020(servantLeaderInfo, &v374, 0, 0LL);
    eventSetupInfo = v8->fields.eventSetupInfo;
    rarity = v109;
    if ( !eventSetupInfo )
      goto LABEL_194;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_543;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_41980756 = ServantLeaderInfo__getEventUpVal_41980756(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v115 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v116 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v116,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v117 = v8->fields.eventSetupInfo;
      v366 = v8;
      if ( !v117 )
        goto LABEL_543;
      v118 = v117->fields.eventIdList;
      v363 = (EventServantPointRankMaster_o *)v115;
      v336 = CardImageLimitCount;
      if ( !v118 )
        goto LABEL_543;
      v119 = *(_QWORD *)&v118->max_length;
      if ( (int)v119 >= 1 )
      {
        v120 = 0LL;
        while ( 1 )
        {
          if ( v120 >= (unsigned int)v119 )
            goto LABEL_544;
          v121 = v118->m_Items[v120 + 1];
          questRestrictionInfo = v366->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v121 )
          {
            if ( !Master_object )
              goto LABEL_543;
            v123 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                     v121,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v123
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v123, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v363;
              if ( !v363 )
                goto LABEL_543;
              if ( EventServantPointRankMaster__IsEnableEvent(v363, v121, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v126 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v125 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v383.fields.currentCryptoKey = v126;
                *(_QWORD *)&v383.fields.fakeValue = v125;
                v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v383, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v363, v121, eventSvtPoint, v127, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v70 = v365;
                v130 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_40331704(v130, v121, 0LL);
                if ( !v130 )
                  goto LABEL_543;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v130,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v116 )
                  goto LABEL_543;
                System_Collections_Generic_List_object___Insert(
                  v116,
                  0,
                  (Il2CppObject *)v130,
                  (const MethodInfo_368CA1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v131 = (EventPersonalMargeUpValInfo_o *)sub_1C3B9B0(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v131, v121, v70, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_543;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v131 )
                goto LABEL_543;
              EventPersonalMargeUpValInfo__Add(v131, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v131, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v131, 0LL);
                if ( !gameObject )
                  goto LABEL_543;
                v138 = *(_QWORD *)(gameObject + 24);
                v139 = gameObject;
                if ( (int)v138 >= 1 )
                  break;
              }
            }
          }
LABEL_191:
          LODWORD(v119) = v118->max_length;
          if ( (__int64)++v120 >= (int)v119 )
            goto LABEL_192;
        }
        v140 = 0LL;
        while ( v140 < (unsigned int)v138 )
        {
          if ( !v116 )
            goto LABEL_543;
          v52 = *(struct UIWidget_o **)(v139 + 32 + 8 * v140);
          items = v116->fields._items;
          v142 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v116->fields._version;
          if ( !items )
            goto LABEL_543;
          v143 = v116->fields._size;
          if ( (unsigned int)v143 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v116,
              (Il2CppObject *)v52,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          }
          else
          {
            v144 = &items->obj.klass + v143;
            v116->fields._size = v143 + 1;
            v144[4] = (Il2CppClass *)v52;
            sub_1C3B708((PartyOrganizationUtility_o *)(v144 + 4), (int64_t)v52, v132, v133, v134, v135, v136, v137);
          }
          LODWORD(v138) = *(_DWORD *)(v139 + 24);
          if ( (__int64)++v140 >= (int)v138 )
            goto LABEL_191;
        }
        goto LABEL_544;
      }
LABEL_192:
      if ( !v116 )
        goto LABEL_543;
      v145 = EventUpVal_41980756;
      v8 = v366;
      v68 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v336;
      v362 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v116,
                                                (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_194:
      v362 = 0LL;
      v145 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParamsa = servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             v8->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         v8->fields.questRestrictionInfo,
                                         0LL,
                                         0LL);
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL) )
    {
      v367 = 1;
LABEL_218:
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      this = v348;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      goto LABEL_265;
    }
    v337 = QuestRestriction;
    v148 = CardImageLimitCount;
    v149 = v8;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    v150 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    if ( v150 < 1 )
    {
      v367 = 0;
      v8 = v149;
    }
    else
    {
      v151 = v149->fields.questRestrictionInfo;
      if ( !v151 )
        goto LABEL_543;
      v8 = v149;
      v152 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41939672(v151, v152, 0LL) )
      {
        v334 = UniqueSvtRestriction;
        v153 = exceedCount;
        v154 = v8->fields.questRestrictionInfo;
        v156 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v155 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v384.fields.currentCryptoKey = v156;
        *(_QWORD *)&v384.fields.fakeValue = v155;
        v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v384, 0LL);
        v158 = servantLeaderInfo->fields.limitCount;
        v159 = v157;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v154 )
          goto LABEL_543;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v154,
                                              v159,
                                              v158,
                                              gameObject,
                                              v152,
                                              1,
                                              0LL);
        v68 = svtId;
        UniqueSvtRestriction = v334;
        exceedCount = v153;
        v367 = IsRestrictionServantIndividuality;
        goto LABEL_217;
      }
      v367 = 0;
    }
    v68 = svtId;
LABEL_217:
    CardImageLimitCount = v148;
    QuestRestriction = v337;
    goto LABEL_218;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_543;
  v102 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v103 = *(_DWORD *)(gameObject + 264);
  lv[0] = v103;
  if ( v63 )
  {
    lv[0] = LODWORD(v63[16].monitor) + v103;
    v104 = HIDWORD(v63[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v104 = *(_DWORD *)(gameObject + 268);
  }
  v161 = *(_DWORD *)(gameObject + 272);
  v377 = v104;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v347 = v161;
  v162 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v102->fields.exceedCount;
  rarity = v162;
  FrameType = UserServantEntity__getFrameType(v102, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v102, 0, 0LL);
  UserServantEntity__getSkillInfo(v102, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v102, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_543;
  strengthStatus = tdInfo->fields.strengthStatus;
  v345 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v358 = v102;
  UserServantEntity__GetAppendPassiveSkillInfo_41707308(v102, &v374, 0LL);
  if ( v8->fields.eventSetupInfo )
  {
    v338 = CardImageLimitCount;
    if ( v63 )
    {
      v163 = v63[2];
      *(Il2CppObject *)&v372.fields.currentCryptoKey = v63[1];
      *(Il2CppObject *)&v372.fields.fakeValue = v163;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v371 = v372;
      v164 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v371, 0LL);
    }
    else
    {
      v164 = -1LL;
    }
    v167 = v365;
    gameObject = sub_1C3B80C(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_543;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_544;
    *(_QWORD *)(gameObject + 32) = v164;
    EventUpVal_41682044 = UserServantEntity__getEventUpVal_41682044(
                            v102,
                            &eventUpVallInfo,
                            v8->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_543;
    cardParamsb = exceedCount;
    v349 = this;
    v169 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v170 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v364 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v171 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v171,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v172 = v8->fields.eventSetupInfo;
    v368 = v8;
    if ( !v172 )
      goto LABEL_543;
    v173 = v172->fields.eventIdList;
    v335 = EventUpVal_41682044;
    if ( !v173 )
      goto LABEL_543;
    v174 = *(_QWORD *)&v173->max_length;
    if ( (int)v174 >= 1 )
    {
      v175 = 0LL;
      codeIdsa = (System_Int32_array *)&v102->fields.userId;
      while ( 1 )
      {
        if ( v175 >= (unsigned int)v174 )
          goto LABEL_544;
        if ( !v169 )
          goto LABEL_543;
        v176 = v173->m_Items[v175 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v169,
                                v176,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v170 )
            goto LABEL_543;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v170, v176, 0LL) )
          {
            v177 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v372.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v372.fields.fakeValue = v177;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v370 = v372;
            v178 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v370, 0LL);
            v179 = UserServantEntity__getSvtId(v358, 0LL);
            gameObject = (__int64)v364;
            if ( !v364 )
              goto LABEL_543;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v364,
                   &entity,
                   v178,
                   v176,
                   v179,
                   0LL) )
            {
              gameObject = (__int64)entity;
              if ( !entity )
                goto LABEL_543;
              BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
            }
            else
            {
              BuddyPoint = 0;
            }
            v181 = UserServantEntity__getSvtId(v358, 0LL);
            v182 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v170,
                     v176,
                     BuddyPoint,
                     v181,
                     0LL);
            v183 = v182 ? v182->fields.svtPointRank : 0;
            v184 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_40331704(v184, v176, 0LL);
            if ( !v184 )
              goto LABEL_543;
            EventMargeItemUpValInfo__SetServantPointInfo(v184, BuddyPoint, v183, 0, 0LL);
            if ( !v171 )
              goto LABEL_543;
            System_Collections_Generic_List_object___Insert(
              v171,
              0,
              (Il2CppObject *)v184,
              (const MethodInfo_368CA1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v167 = v365;
          }
          v185 = (EventPersonalMargeUpValInfo_o *)sub_1C3B9B0(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v185, v176, v167, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_543;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v185 )
            goto LABEL_543;
          EventPersonalMargeUpValInfo__Add(v185, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v185, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v185, 0LL);
            if ( !gameObject )
              goto LABEL_543;
            v192 = *(_QWORD *)(gameObject + 24);
            v193 = gameObject;
            if ( (int)v192 >= 1 )
              break;
          }
        }
LABEL_261:
        LODWORD(v174) = v173->max_length;
        if ( (__int64)++v175 >= (int)v174 )
          goto LABEL_262;
      }
      v194 = 0LL;
      while ( v194 < (unsigned int)v192 )
      {
        if ( !v171 )
          goto LABEL_543;
        v52 = *(struct UIWidget_o **)(v193 + 32 + 8 * v194);
        v195 = v171->fields._items;
        v196 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v171->fields._version;
        if ( !v195 )
          goto LABEL_543;
        v197 = v171->fields._size;
        if ( (unsigned int)v197 >= v195->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v171,
            (Il2CppObject *)v52,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
        }
        else
        {
          v198 = &v195->obj.klass + v197;
          v171->fields._size = v197 + 1;
          v198[4] = (Il2CppClass *)v52;
          sub_1C3B708((PartyOrganizationUtility_o *)(v198 + 4), (int64_t)v52, v186, v187, v188, v189, v190, v191);
        }
        LODWORD(v192) = *(_DWORD *)(v193 + 24);
        if ( (__int64)++v194 >= (int)v192 )
          goto LABEL_261;
      }
LABEL_544:
      sub_1C3B9C8(gameObject, v52);
    }
LABEL_262:
    if ( !v171 )
      goto LABEL_543;
    v145 = v335;
    v362 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v171,
                                              (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v349;
    v8 = v368;
    v68 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v338;
  }
  else
  {
    v362 = 0LL;
    v145 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v358, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(v358, v8->fields.questRestrictionInfo, 2, 0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v358, v8->fields.questRestrictionInfo, 0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v358,
                                       v8->fields.questRestrictionInfo,
                                       0LL);
  v367 = 0;
  cardParamsa = 0LL;
LABEL_265:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_543;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v68,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_543;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v68, gameObject, 0LL, 0LL);
  v199 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v200 = FrameType;
  if ( UnityEngine_Object__op_Inequality(v199, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_543;
      ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, FrameType, 0, 0LL);
    }
  }
  v201 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v201, 0LL, 0LL) )
  {
    v202 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v202 )
      goto LABEL_543;
    UILabel__set_text(v202, (System_String_o *)gameObject, 0LL);
  }
  v203 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v203, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    v350 = IsDataLost;
    v204 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v205 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v206 = QuestRestriction;
    Icon_39123920 = Rarity__getIcon_39123920(rarity, exceedCount, v205, 0LL);
    v208 = v145;
    if ( exceedCount < 1 )
    {
      v209 = UniqueSvtRestriction;
      v210 = exceedCount;
      v212 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v209 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_543;
      v210 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_543;
      v212 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v213 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v212 >= 3 )
    {
      AtlasManager__SetEventSprite(v213, Icon_39123920, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v213, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_543;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_39123920, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( gameObject )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v214 = v210 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
      if ( gameObject )
      {
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v389.fields.x = v214;
          v389.fields.y = y;
          v389.fields.z = z;
          UniqueSvtRestriction = v209;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v389, 0LL);
          v145 = v208;
          QuestRestriction = v206;
          TimesToRestart = v204;
          IsDataLost = v350;
          v200 = FrameType;
          goto LABEL_309;
        }
      }
    }
LABEL_543:
    sub_1C3B9C0(gameObject, v52);
  }
LABEL_309:
  v217 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v217, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v218 = this->fields.skillListTreasureDevice;
    v219 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_39826328(v219, 0LL);
    if ( !v218 )
      goto LABEL_543;
    SkillListTreasureDeviceComponent__Set(
      v218,
      (System_String_o *)gameObject,
      v345,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v52 = this->fields.skillInfoUiWidget;
      v226 = *(_QWORD *)(gameObject + 16);
      v227 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v226 )
        goto LABEL_543;
      v228 = *(int *)(gameObject + 24);
      if ( (unsigned int)v228 >= *(_DWORD *)(v226 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v52,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
      }
      else
      {
        v229 = v226 + 8 * v228;
        *(_DWORD *)(gameObject + 24) = v228 + 1;
        *(_QWORD *)(v229 + 32) = v52;
        sub_1C3B708((PartyOrganizationUtility_o *)(v229 + 32), (int64_t)v52, v220, v221, v222, v223, v224, v225);
      }
    }
  }
  v230 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v230, 0LL, 0LL) )
  {
    if ( v374 && *(_QWORD *)&v374->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v231 = this->fields.appendSkillList;
      v232 = v374;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_39826328(v232, 0LL);
      if ( !v231 )
        goto LABEL_543;
      AppendSkillListComponent__Set(v231, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v52 = this->fields.appendSkillInfoUiWidget;
        v239 = *(_QWORD *)(gameObject + 16);
        v240 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v239 )
          goto LABEL_543;
        v241 = *(int *)(gameObject + 24);
        if ( (unsigned int)v241 >= *(_DWORD *)(v239 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v52,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
        }
        else
        {
          v242 = v239 + 8 * v241;
          *(_DWORD *)(gameObject + 24) = v241 + 1;
          *(_QWORD *)(v242 + 32) = v52;
          sub_1C3B708((PartyOrganizationUtility_o *)(v242 + 32), (int64_t)v52, v233, v234, v235, v236, v237, v238);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v244 = this->fields.switchSkillUIList;
    if ( v244 )
    {
      v245 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v244,
                              (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v245 )
        goto LABEL_543;
      SwitchUIWidgetComponent__Set(v245, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v246 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v246, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_543;
    if ( v8->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_39637016(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_39637260(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v247 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v247, 0LL, 0LL) )
  {
    v248 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v347 <= 0 )
      v249 = 1.0;
    else
      v249 = 0.015686;
    if ( v347 <= 0 )
      v248 = 1.0;
    if ( !gameObject )
      goto LABEL_543;
    v250 = 1.0;
    v251 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v248 - 1), 0LL);
    v252 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_64174220((int32_t)lv, (System_String_o *)StringLiteral_405/*"#0039E2"*/, 0LL);
    if ( !v252 )
      goto LABEL_543;
    UILabel__set_text(v252, (System_String_o *)gameObject, 0LL);
  }
  v253 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v253, 0LL, 0LL) )
  {
    v254 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v255 = 1.0;
    else
      v255 = 0.015686;
    if ( adjustHp <= 0 )
      v254 = 1.0;
    if ( !gameObject )
      goto LABEL_543;
    v256 = 1.0;
    v257 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v254 - 1), 0LL);
    v258 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_64174220((int32_t)&v377, (System_String_o *)StringLiteral_405/*"#0039E2"*/, 0LL);
    if ( !v258 )
      goto LABEL_543;
    UILabel__set_text(v258, (System_String_o *)gameObject, 0LL);
  }
  v259 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v259, 0LL, 0LL) )
  {
    v260 = this->fields.baseSprite;
    v261 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v260, v200, v261, 0, 0LL);
  }
  v262 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v262, 0LL, 0LL) )
  {
    v263 = this->fields.base2Sprite;
    v264 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v263, v200, v264, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v367 | QuestRestriction) & 1) != 0 )
  {
    v266 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v354;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v266, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v267 = LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PreserveSig"*/, 0LL);
    goto LABEL_398;
  }
  UserServantLeaderEntity = v354;
  if ( !v8->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v365, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_39109112(126, 0LL) )
    {
      v272 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v272, 0LL, 0LL) )
        goto LABEL_429;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_543;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_543;
      v273 = 1;
LABEL_428:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v273, 0LL);
LABEL_429:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v52);
      goto LABEL_430;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v271 = 1;
      v270 = this;
      v269 = 0;
      v268 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_399;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v276 = LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, 0LL);
      LODWORD(v372.fields.currentCryptoKey) = TimesToRestart;
      v280 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v372, v277, v278, v279);
      v267 = System_String__Format(v276, v280, 0LL);
LABEL_398:
      v268 = v267;
      v269 = 1;
      v270 = this;
      v271 = 0;
LABEL_399:
      SupportSelectItemDraw__SetMaskMessage(v270, v268, v269, v271, v265);
      goto LABEL_430;
    }
    v281 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
      goto LABEL_429;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_543;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_543;
    v273 = 0;
    goto LABEL_428;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v274 = LocalizationManager__Get((System_String_o *)StringLiteral_6587/*"FifthFeedNodeName"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v274, 1, v275);
LABEL_430:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v283 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v283, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_543;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v73 = 0;
  v92 = v145 != 0;
  if ( !v360 )
    goto LABEL_541;
  v63 = v355;
  if ( (gameObject & 1) == 0 )
    goto LABEL_459;
  max_length = v360->max_length;
  if ( max_length < 1 )
  {
    v73 = 0;
LABEL_459:
    if ( v355 )
      goto LABEL_460;
    goto LABEL_122;
  }
  v286 = v8;
  v287 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v360->m_Items;
  do
  {
    if ( (unsigned int)v287 >= max_length )
      goto LABEL_544;
    v291 = m_Items[v287];
    if ( !v291 )
      goto LABEL_543;
    gameObject = System_Array__IndexOf_int_(
                   v291->fields.targetIds,
                   svtId,
                   (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
    max_length = v360->max_length;
    if ( (unsigned int)v287 >= max_length )
      goto LABEL_544;
    v292 = m_Items[v287];
    if ( !v292 )
      goto LABEL_543;
    targetIds = v292->fields.targetIds;
    if ( targetIds )
      v294 = targetIds->max_length == 0;
    else
      v294 = 1;
    if ( (v294 || (int)gameObject >= 0) && value < v292->fields.value )
    {
      eventId = v292->fields.eventId;
      value = v292->fields.value;
    }
    ++v287;
  }
  while ( (int)v287 < max_length );
  v8 = v286;
  if ( value >= 1 )
  {
    v295 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    v296 = v295;
    if ( v362 )
      System_Collections_Generic_List_object____ctor_57193824(
        v295,
        (System_Collections_Generic_IEnumerable_T__o *)v362,
        (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77846616);
    else
      System_Collections_Generic_List_object____ctor(
        v295,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v323 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_40331624(v323, eventId, value, 0LL);
    if ( !v296 )
      goto LABEL_543;
    v330 = v296->fields._items;
    v331 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++v296->fields._version;
    if ( !v330 )
      goto LABEL_543;
    v332 = v296->fields._size;
    if ( (unsigned int)v332 >= v330->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v296,
        (Il2CppObject *)v323,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v331[4] + 192LL) + 112LL));
    }
    else
    {
      v333 = &v330->obj.klass + v332;
      v296->fields._size = v332 + 1;
      v333[4] = (Il2CppClass *)v323;
      sub_1C3B708((PartyOrganizationUtility_o *)(v333 + 4), (int64_t)v323, v324, v325, v326, v327, v328, v329);
    }
    v362 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v296,
                                              (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  }
  v73 = 0;
LABEL_541:
  v63 = v355;
  if ( !v355 )
    goto LABEL_122;
LABEL_460:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_543;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_543;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v297 = (UISprite_o *)this->fields.equipSprite;
  v299 = v63[5].klass;
  v298 = v63[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v385.fields.currentCryptoKey = v299;
  *(_QWORD *)&v385.fields.fakeValue = v298;
  v300 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v385, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v297, v300, 0LL, 0LL);
  v301 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v301, 0LL, 0LL) )
  {
    v303 = v63[6].klass;
    v302 = v63[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v386.fields.currentCryptoKey = v303;
    *(_QWORD *)&v386.fields.fakeValue = v302;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v386, 0LL);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_543;
    v304 = gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                            0LL);
    if ( v304 >= 4 )
    {
      if ( !v356 )
        goto LABEL_543;
      v101 = SLODWORD(v356[5].monitor) < v304;
      goto LABEL_478;
    }
LABEL_475:
    v52 = 0LL;
    goto LABEL_481;
  }
LABEL_483:
  v305 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v305, 0LL, 0LL) )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( (v73 & 1) == 0 )
      {
        v306 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v306 )
        {
          v308 = *(_QWORD *)&v306->fields.svtId.fields.currentCryptoKey;
          v307 = *(_QWORD *)&v306->fields.svtId.fields.fakeValue;
          v309 = (EventMargeItemUpValInfo_array *)v362;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v387.fields.currentCryptoKey = v308;
          *(_QWORD *)&v387.fields.fakeValue = v307;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v387, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_543;
          v310 = gameObject;
          v311 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_504:
          v317 = v311;
          goto LABEL_506;
        }
      }
    }
    else if ( (v73 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v316 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v315 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        v309 = (EventMargeItemUpValInfo_array *)v362;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v388.fields.currentCryptoKey = v316;
        *(_QWORD *)&v388.fields.fakeValue = v315;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v388, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_543;
        v310 = gameObject;
        v311 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_504;
      }
    }
    v309 = (EventMargeItemUpValInfo_array *)v362;
    v317 = -1;
    v310 = -1;
LABEL_506:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_543;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)gameObject, v309, v310, v317, equipSvtId, 0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_543;
      v313 = 0;
      goto LABEL_515;
    }
    goto LABEL_516;
  }
  v312 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v312, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_543;
    v313 = v92;
LABEL_515:
    ShiningIconComponent__Set_39658244((ShiningIconComponent_o *)gameObject, v313, 0LL);
  }
LABEL_516:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_543;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        pushUserServantId = v8->fields.pushUserServantId;
        if ( !pushUserServantId )
          return;
        if ( UserServantLeaderEntity )
        {
          if ( pushUserServantId != UserServantLeaderEntity->fields.userSvtId )
            return;
          gameObject = (__int64)this->fields.pushSprite;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_543;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v17; // x22
  UIWidget_o *v18; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1E7BA & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, message);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_20720/*"lavenderblush"*/, v11);
    sub_1C3B764(&StringLiteral_18832/*"event_frame_"*/, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    byte_4C1E7BA = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_48;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    v17 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_18832/*"event_frame_"*/, 0LL);
      v18 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v18 )
        goto LABEL_48;
      UIWidget__set_width(v18, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      p_z = &static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
    }
    else
    {
      if ( !v17 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20720/*"lavenderblush"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      p_z = &this->fields.maskSpriteDefaultPosition.fields.z;
      p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
      p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
    }
    v33.fields.z = *p_z;
    v33.fields.y = *p_y;
    v33.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4C1C516 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4C1C516 = 1;
        }
        v31 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v31->oneVector.fields.x;
        y = v31->oneVector.fields.y;
        z = v31->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v24;
        z = 1.0;
        y = 1.0;
      }
      if ( !v25 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C1C516 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4C1C516 = 1;
      }
      if ( !v25 )
        goto LABEL_48;
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v30->oneVector.fields.y;
      z = v30->oneVector.fields.z;
      x = v30->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_48:
    sub_1C3B9C0(gameObject, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v13; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1E7BB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, message);
    sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1E7BB = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_33;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4C1C516 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v9);
          byte_4C1C516 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        y = 1.0;
      }
      if ( !v13 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4C1C516 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4C1C516 = 1;
      }
      if ( !v13 )
        goto LABEL_33;
      v18 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v18->oneVector.fields.y;
      z = v18->oneVector.fields.z;
      x = v18->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v20.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v20.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v20.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v20, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1C3B9C0(gameObject, v9);
  }
}