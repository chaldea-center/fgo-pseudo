void SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  SupportSelectItemDraw_c *v1; // x8
  Il2CppClass *v2; // x0
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x19
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  struct SupportSelectItemDraw_StaticFields *static_fields; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  SupportSelectItemDraw_c *v76; // x8
  struct SupportSelectItemDraw_StaticFields *v77; // x8

  if ( (byte_596CC53 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&SupportSelectItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21118/*"icon_class1002"*/);
    sub_2213A60(&StringLiteral_21116/*"icon_class007"*/);
    sub_2213A60(&StringLiteral_21115/*"icon_class006"*/);
    sub_2213A60(&StringLiteral_21113/*"icon_class004"*/);
    sub_2213A60(&StringLiteral_21110/*"icon_class001"*/);
    sub_2213A60(&StringLiteral_21117/*"icon_class1001"*/);
    sub_2213A60(&StringLiteral_21111/*"icon_class002"*/);
    sub_2213A60(&StringLiteral_21114/*"icon_class005"*/);
    sub_2213A60(&StringLiteral_21112/*"icon_class003"*/);
    byte_596CC53 = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v1 = SupportSelectItemDraw_TypeInfo;
  v2 = string___TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v3 = sub_2213B20(v2, 9);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_14;
  v12 = StringLiteral_21117/*"icon_class1001"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_21117/*"icon_class1001"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_14;
  v19 = StringLiteral_21110/*"icon_class001"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_21110/*"icon_class001"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_14;
  v26 = StringLiteral_21111/*"icon_class002"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_21111/*"icon_class002"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( (*(_DWORD *)(v11 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_14;
  v33 = StringLiteral_21112/*"icon_class003"*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_21112/*"icon_class003"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32);
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_14;
  v40 = StringLiteral_21113/*"icon_class004"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_21113/*"icon_class004"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v11 + 24) <= 5u )
    goto LABEL_14;
  v47 = StringLiteral_21114/*"icon_class005"*/;
  *(_QWORD *)(v11 + 72) = StringLiteral_21114/*"icon_class005"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 72), v47, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v11 + 24) <= 6u
    || (v54 = StringLiteral_21115/*"icon_class006"*/,
        *(_QWORD *)(v11 + 80) = StringLiteral_21115/*"icon_class006"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 80), v54, v48, v49, v50, v51, v52, v53),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFF8) == 0)
    || (v61 = StringLiteral_21116/*"icon_class007"*/,
        *(_QWORD *)(v11 + 88) = StringLiteral_21116/*"icon_class007"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 88), v61, v55, v56, v57, v58, v59, v60),
        *(_DWORD *)(v11 + 24) <= 8u) )
  {
LABEL_14:
    sub_2213CE4(v3);
  }
  v68 = StringLiteral_21118/*"icon_class1002"*/;
  *(_QWORD *)(v11 + 96) = StringLiteral_21118/*"icon_class1002"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 96), v68, v62, v63, v64, v65, v66, v67);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->backClassIconFileList,
    v11,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = SupportSelectItemDraw_TypeInfo;
  *(_OWORD *)&SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05 = xmmword_E9D1B0;
  v77 = v76->static_fields;
  *(_QWORD *)&v77->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&v77->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
  v77->DATA_LOST_MASK_POSITION.fields.z = 0.0;
}


void SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_o *i; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  UnityEngine_Component_o *v22; // x20
  __int64 naturalAligment; // x9
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_o *equipRootObj; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *v29; // x22
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x20
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_IEnumerator_o *v38; // [xsp+28h] [xbp-48h]

  if ( (byte_596CC52 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596CC52 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v6);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v9 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(i, *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    if ( !v38 )
      sub_2213CDC(v12, v13);
    v14 = v38->klass;
    v15 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
    }
    else
    {
LABEL_18:
      v17 = sub_224BC3C(v38, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       v38,
                                       *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      goto LABEL_41;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v18->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v18, UnityEngine_Transform_TypeInfo, v20, v21);
LABEL_41:
      sub_2213CDC(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_2213CDC(0, v24);
    v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(gameObject, v29, 0) )
    {
      v30 = UnityEngine_Component__get_gameObject(v22, 0);
      if ( !v30 )
        sub_2213CDC(0, v31);
      UnityEngine_GameObject__SetActive(v30, 0, 0);
    }
  }
  v32 = sub_2213BB4(v38, System_IDisposable_TypeInfo);
  if ( v32 )
  {
    v33 = *(_QWORD *)v32;
    v34 = v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_36;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_36:
      v37 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
}


void SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v11; // x2
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UISprite_o *v26; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *sortieMaskSprite; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UISprite_o *v35; // x8
  struct UIAtlas_o *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct UISprite_o *v43; // x8
  struct System_String_o *v44; // x1
  UnityEngine_Object_o *baseSprite; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct UISprite_o *v52; // x8
  struct UIAtlas_o *v53; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct UISprite_o *v61; // x8
  struct UIAtlas_o *v62; // x1
  System_Collections_Generic_List_object__o *v63; // x20
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12

  if ( (byte_596CC4A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC4A = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    v18 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    if ( !v18 )
      goto LABEL_46;
    mSpriteName = v18->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.maskSpriteDefaultSpriteName,
      (int32_t)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v26 = this->fields.restrictionMaskSprite;
    if ( !v26 )
      goto LABEL_46;
    mAtlas = v26->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
      (int32_t)mAtlas,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  transform = (void *)UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v35 = this->fields.sortieMaskSprite;
    if ( !v35 )
      goto LABEL_46;
    v36 = v35->fields.mAtlas;
    this->fields.defaultSortieMaskAtlas = v36;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultSortieMaskAtlas,
      (int32_t)v36,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v43 = this->fields.sortieMaskSprite;
    if ( !v43 )
      goto LABEL_46;
    v44 = v43->fields.mSpriteName;
    this->fields.defaultSortieMaskSpriteName = v44;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultSortieMaskSpriteName,
      (int32_t)v44,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    transform = this->fields.sortieMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.defaultSortieMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.defaultSortieMaskPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                                             (UnityEngine_Transform_o *)transform,
                                                                             0);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v29);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v52 = this->fields.baseSprite;
    if ( !v52 )
      goto LABEL_46;
    v53 = v52->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v53;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)v53,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v46);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v61 = this->fields.base2Sprite;
    if ( v61 )
    {
      v62 = v61->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v62;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v62,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      goto LABEL_45;
    }
LABEL_46:
    sub_2213CDC(transform, v5);
  }
LABEL_45:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, (const MethodInfo *)v55);
  v63 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v63;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
}


void SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *noneEquipSprite; // x20
  __int64 v8; // x2
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_596CC4B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC4B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v8);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_2213CDC(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_596CC4D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CC4D = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_2213CDC(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetActiveDragSwapGuide(SupportSelectItemDraw_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596CC50 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC50 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flag, method);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0, 0) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


void SupportSelectItemDraw__SetEquipAlpha(SupportSelectItemDraw_o *this, float alpha, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *equipRootObj; // x20
  __int64 v7; // x1
  struct UIWidget_o *v8; // x0

  if ( (byte_596CC51 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC51 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0, 0) )
  {
    v8 = this->fields.equipRootObj;
    if ( !v8 )
      sub_2213CDC(0, v7);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))v8->klass->vtable._8_set_alpha.methodPtr)(
      v8,
      v8->klass->vtable._8_set_alpha.method,
      alpha);
  }
}


void SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  unsigned __int64 v10; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  __int64 size; // x2
  int v13; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  __int64 v15; // x2
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x27
  struct EquipTargetInfo_o *equipTarget1; // x25
  __int64 v19; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x19
  __int64 v21; // x20
  __int64 v22; // x21
  Il2CppObject *v23; // x23
  Il2CppObject *MasterData_object; // x19
  __int64 v25; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x19
  Il2CppClass *klass; // x20
  void *monitor; // x21
  __int64 v29; // x2
  __int64 v30; // x19
  __int64 v31; // x20
  ServantLeaderInfo_o *v32; // x20
  ServantEntity_o *v33; // x19
  int32_t v34; // w8
  int v35; // w8
  struct EventUpValSetupInfo_o *v36; // x2
  struct System_Int32_array *v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  bool EventUpVal; // w19
  Il2CppObject *v41; // x20
  Il2CppObject *v42; // x22
  Il2CppObject *v43; // x23
  System_Collections_Generic_List_object__o *v44; // x29
  struct EventUpValSetupInfo_o *v45; // x8
  struct System_Int32_array *v46; // x9
  il2cpp_array_size_t v47; // x8
  unsigned __int64 v48; // x25
  int32_t v49; // w24
  EventServantPointRankEntity_o *v50; // x0
  int32_t svtPointRank; // w20
  EventMargeItemUpValInfo_o *v52; // x19
  EventPersonalMargeUpValInfo_o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_ICollection_o **v60; // x22
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  __int64 v67; // x8
  __int64 v68; // x26
  unsigned __int64 v69; // x28
  Il2CppObject *v70; // x20
  _DWORD *v71; // x8
  int v72; // w8
  __int64 v73; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x19
  System_Func_int__bool__o *v77; // x21
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  struct QuestRestrictionInfo_o *v88; // x20
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x19
  Il2CppObject *v90; // x25
  int v91; // w23
  __int64 v92; // x2
  UISprite_o *backClassIcon; // x19
  __int64 v94; // x8
  __int64 v95; // x1
  __int64 v96; // x2
  UnityEngine_Object_o *v97; // x19
  __int64 v98; // x1
  __int64 v99; // x2
  UISprite_o *v100; // x20
  UIAtlas_o *v101; // x19
  UnityEngine_Object_o *v102; // x19
  __int64 v103; // x1
  __int64 v104; // x2
  UISprite_o *v105; // x20
  UIAtlas_o *v106; // x19
  UnityEngine_Object_o *v107; // x19
  __int64 v108; // x2
  UnityEngine_Object_o *v109; // x19
  __int64 v110; // x2
  UnityEngine_Object_o *v111; // x19
  __int64 v112; // x2
  UnityEngine_Object_o *v113; // x19
  __int64 v114; // x2
  UnityEngine_Object_o *v115; // x19
  __int64 v116; // x2
  UnityEngine_Object_o *v117; // x19
  __int64 v118; // x1
  __int64 v119; // x2
  UnityEngine_Object_o *v120; // x19
  __int64 v121; // x2
  UnityEngine_Object_o *v122; // x19
  __int64 v123; // x2
  UnityEngine_Object_o *v124; // x19
  __int64 v125; // x2
  UnityEngine_Object_o *v126; // x19
  _BOOL4 QuestRestriction; // w22
  __int64 v128; // x25
  __int64 v129; // x2
  __int64 v130; // x19
  __int64 v131; // x20
  ServantEntity_o *v132; // x19
  int32_t v133; // w8
  int32_t AtkBoostValue; // w22
  int32_t HpBoostValue; // w20
  int v136; // w8
  __int64 v137; // x1
  __int64 v138; // x2
  Il2CppObject v139; // q1
  int64_t v140; // x19
  int v141; // w20
  int32_t v142; // w19
  QuestRestrictionInfo_o *v143; // x21
  int32_t limitCount; // w20
  _BOOL4 IsRestrictionServantIndividuality; // w0
  __int64 v146; // x1
  __int64 v147; // x2
  Il2CppObject *v148; // x21
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v150; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x8
  struct System_Int32_array *eventIdList; // x28
  il2cpp_array_size_t max_length; // x8
  ServantEntity_o *v154; // x27
  unsigned __int64 v155; // x29
  int32_t v156; // w26
  __int64 v157; // x1
  __int64 v158; // x2
  __int128 v159; // q1
  int64_t v160; // x2
  int32_t BuddyPoint; // w20
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v163; // w27
  EventMargeItemUpValInfo_o *v164; // x19
  EventPersonalMargeUpValInfo_o *v165; // x19
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  int v172; // w8
  __int64 v173; // x20
  unsigned int v174; // w19
  struct System_Object_array *items; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  Il2CppClass **v178; // x0
  __int64 v179; // x1
  __int64 v180; // x2
  UnityEngine_Object_o *servantClassIcon; // x19
  __int64 v182; // x2
  __int64 v183; // x2
  ServantClassIconComponent_o *v184; // x19
  int v185; // w8
  UnityEngine_Object_o *levelLabel; // x19
  __int64 v188; // x1
  __int64 v189; // x2
  UILabel_o *v190; // x19
  UnityEngine_Object_o *raritySprite; // x19
  __int64 v192; // x2
  __int64 v193; // x1
  __int64 v194; // x2
  int32_t v195; // w19
  int32_t v196; // w21
  __int64 v197; // x1
  __int64 v198; // x2
  System_String_o *Icon_47404732; // x20
  int32_t RarityIcon; // w19
  UISprite_o *v201; // x19
  UISprite_o *v202; // x19
  float v203; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  System_String_o *v207; // x2
  __int64 v208; // x1
  __int64 v209; // x2
  SkillListTreasureDeviceComponent_o *v210; // x19
  SkillInfo_array *v211; // x20
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  __int64 v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  __int64 v220; // x8
  UnityEngine_Object_o *appendSkillList; // x19
  System_String_o *v222; // x2
  __int64 v223; // x1
  __int64 v224; // x2
  AppendSkillListComponent_o *v225; // x19
  SkillInfo_array *v226; // x20
  System_String_o *v227; // x3
  int32_t v228; // w4
  int32_t v229; // w5
  bool v230; // w6
  bool v231; // w7
  __int64 v232; // x8
  _QWORD *v233; // x9
  __int64 v234; // x10
  __int64 v235; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  __int64 v237; // x1
  __int64 v238; // x2
  struct System_Collections_Generic_List_UIWidget__o *v239; // x0
  SwitchUIWidgetComponent_o *v240; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  __int64 v242; // x2
  UnityEngine_Object_o *attackLabel; // x19
  __int64 v244; // x2
  UILabel_o *v248; // x19
  UnityEngine_Object_o *hpLabel; // x19
  __int64 v250; // x2
  UILabel_o *v254; // x19
  UnityEngine_Object_o *baseSprite; // x19
  __int64 v256; // x1
  __int64 v257; // x2
  UISprite_o *v258; // x20
  UIAtlas_o *baseDefaultUIAtlas; // x19
  _BOOL4 isGrandServant; // w21
  UnityEngine_Object_o *base2Sprite; // x19
  __int64 v262; // x2
  UISprite_o *v263; // x20
  UIAtlas_o *base2DefaultUIAtlas; // x19
  _BOOL4 v265; // w21
  __int64 v266; // x1
  __int64 v267; // x2
  UnityEngine_Object_o *restrictionMaskSprite; // x19
  __int64 v269; // x1
  __int64 v270; // x2
  System_String_o *maskSpriteDefaultSpriteName; // x20
  UIAtlas_o *maskSpriteDefaultAtlas; // x21
  _BOOL4 v273; // w28
  _BOOL4 v274; // w22
  UISprite_o *v275; // x19
  __int64 v276; // x2
  UIWidget_o *v277; // x19
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float *p_y; // x9
  struct UnityEngine_Vector3_o *p_GrandMaskPosition05; // x8
  UnityEngine_Object_o *sortieMaskSprite; // x19
  __int64 v282; // x1
  __int64 v283; // x2
  const MethodInfo *v284; // x4
  System_String_o *defaultSortieMaskSpriteName; // x20
  UIAtlas_o *defaultSortieMaskAtlas; // x21
  _BOOL4 v287; // w28
  _BOOL4 v288; // w22
  UISprite_o *v289; // x19
  __int64 v290; // x2
  UIWidget_o *v291; // x19
  struct SupportSelectItemDraw_StaticFields *v292; // x9
  float *v293; // x8
  struct UnityEngine_Vector2_o *p_defaultSortieMaskPosition; // x9
  UnityEngine_Object_o *v295; // x19
  __int64 v296; // x2
  System_String_o *v297; // x0
  System_String_o *v298; // x1
  SupportSelectItemDraw_o *v299; // x0
  bool v300; // w2
  bool v301; // w3
  __int64 v302; // x1
  __int64 v303; // x2
  UnityEngine_Object_o *v304; // x19
  bool v305; // w1
  System_String_o *v306; // x0
  const MethodInfo *v307; // x3
  System_String_o *v308; // x19
  Il2CppObject *v309; // x0
  UnityEngine_Object_o *v310; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  __int64 v312; // x2
  UnityEngine_Object_o *friendPointBonusBase; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  int v315; // w8
  __int64 v316; // x19
  int32_t eventId; // w20
  int32_t value; // w21
  EventCampaignEntity_o **m_Items; // x23
  EventCampaignEntity_o *v320; // x8
  EventCampaignEntity_o *v321; // x9
  struct System_Int32_array *targetIds; // x10
  System_Collections_Generic_List_object__o *v323; // x0
  System_Collections_Generic_List_object__o *v324; // x22
  EventMargeItemUpValInfo_o *v325; // x23
  System_String_o *v326; // x2
  System_String_o *v327; // x3
  int32_t v328; // w4
  int32_t v329; // w5
  bool v330; // w6
  bool v331; // w7
  struct System_Object_array *v332; // x8
  _QWORD *v333; // x9
  __int64 v334; // x10
  Il2CppClass **v335; // x0
  __int64 v336; // x1
  __int64 v337; // x2
  Il2CppClass *v338; // x20
  void *v339; // x21
  UISprite_o *equipSprite; // x19
  __int64 v341; // x1
  __int64 v342; // x2
  int32_t v343; // w20
  __int64 v344; // x1
  __int64 v345; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  __int64 v347; // x2
  Il2CppClass *v348; // x19
  void *v349; // x20
  int v350; // w19
  __int64 v351; // x1
  __int64 v352; // x2
  __int64 v353; // x20
  __int64 v354; // x21
  UISprite_o *v355; // x19
  int32_t v356; // w0
  __int64 v357; // x1
  __int64 v358; // x2
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v360; // w21
  __int64 v361; // x1
  __int64 v362; // x2
  UnityEngine_Object_o *v363; // x19
  UnityEngine_Object_o *v364; // x19
  __int64 v365; // x2
  ServantLeaderInfo_o *v366; // x0
  int32_t v367; // w20
  int32_t v368; // w0
  UnityEngine_Object_o *v369; // x19
  __int64 v370; // x2
  bool v371; // w1
  UserServantEntity_o *userServantEntity; // x0
  int32_t v373; // w3
  int32_t equipSvtId; // w4
  __int64 v375; // x1
  __int64 v376; // x2
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  __int64 v379; // x2
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  __int64 v382; // x1
  __int64 v383; // x2
  UnityEngine_Object_o *v384; // x19
  int32_t AddedHp; // [xsp+1Ch] [xbp-1E4h]
  int32_t AddedAtk; // [xsp+20h] [xbp-1E0h]
  int32_t adjustHp; // [xsp+24h] [xbp-1DCh]
  int32_t adjustAtk; // [xsp+28h] [xbp-1D8h]
  int32_t TimesToRestart; // [xsp+28h] [xbp-1D8h]
  int32_t classId; // [xsp+2Ch] [xbp-1D4h]
  System_Int32_array *cardParams; // [xsp+30h] [xbp-1D0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+38h] [xbp-1C8h]
  UserServantLeaderEntity_o *v393; // [xsp+38h] [xbp-1C8h]
  SupportSelectItemDraw_o *v394; // [xsp+40h] [xbp-1C0h]
  _BOOL4 UniqueSvtRestriction; // [xsp+40h] [xbp-1C0h]
  int32_t treasureDeviceNum; // [xsp+4Ch] [xbp-1B4h]
  int32_t strengthStatus; // [xsp+50h] [xbp-1B0h]
  int32_t v398; // [xsp+54h] [xbp-1ACh]
  int32_t rarity; // [xsp+58h] [xbp-1A8h]
  int32_t baseSvtId; // [xsp+5Ch] [xbp-1A4h]
  int32_t frameType; // [xsp+60h] [xbp-1A0h]
  int exceedCount; // [xsp+64h] [xbp-19Ch]
  Il2CppObject *v403; // [xsp+68h] [xbp-198h]
  _DWORD *v404; // [xsp+70h] [xbp-190h]
  Il2CppObject *v405; // [xsp+78h] [xbp-188h]
  bool EventUpVal_50186428; // [xsp+84h] [xbp-17Ch]
  struct EquipTargetInfo_o *v407; // [xsp+88h] [xbp-178h]
  System_Int32_array *codeIds; // [xsp+90h] [xbp-170h]
  EventServantPointRankMaster_o *v409; // [xsp+98h] [xbp-168h]
  int v410; // [xsp+98h] [xbp-168h]
  struct System_Int32_array *v411; // [xsp+A0h] [xbp-160h]
  int v412; // [xsp+A0h] [xbp-160h]
  Il2CppObject *v413; // [xsp+A8h] [xbp-158h]
  int v414; // [xsp+A8h] [xbp-158h]
  ServantLeaderInfo_o *servantLeaderInfo; // [xsp+B0h] [xbp-150h]
  bool IsDataLost; // [xsp+B0h] [xbp-150h]
  ServantEntity_o *v417; // [xsp+B8h] [xbp-148h]
  Il2CppObject *object; // [xsp+C8h] [xbp-138h]
  Il2CppObject *objecta; // [xsp+C8h] [xbp-138h]
  Il2CppObject *objectb; // [xsp+C8h] [xbp-138h]
  SupportServantData_o *v422; // [xsp+D0h] [xbp-130h]
  int32_t svtId; // [xsp+DCh] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v424; // [xsp+E0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v425; // [xsp+100h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v426; // [xsp+120h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+140h] [xbp-C0h] BYREF
  bool isDuplicate; // [xsp+14Ch] [xbp-B4h] BYREF
  int32_t limitCountStage[2]; // [xsp+150h] [xbp-B0h] BYREF
  SkillInfo_array *v430; // [xsp+158h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+160h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+168h] [xbp-98h] BYREF
  int v433; // [xsp+174h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+178h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+188h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v436; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v437; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v438; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v439; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v440; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v441; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v442; // 0:x0.16
  UnityEngine_Vector2_o GrandClassNamePosition; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v444; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v445; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v446; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v447; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v448; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CC4C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int____91750072);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&SupportSelectItemDraw_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__);
    sub_2213A60(&SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
    sub_2213A60(&StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_2213A60(&StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CC4C = 1;
  }
  eventUpVallInfo = 0;
  *(_QWORD *)lv = 0;
  v433 = 0;
  tdInfo = 0;
  skillInfoList = 0;
  *(_QWORD *)limitCountStage = 0;
  v430 = 0;
  isDuplicate = 0;
  entity = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_609;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_609;
  size = (unsigned int)switchSkillUIList->fields._size;
  v13 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v13;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, size);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_609;
    (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v15);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !supportServantData )
    goto LABEL_609;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0);
  eventUpVallInfo = 0;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
  v422 = supportServantData;
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_609;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_609;
      v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v19);
      *(_QWORD *)&v436.fields.currentCryptoKey = v21;
      *(_QWORD *)&v436.fields.fakeValue = v22;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v436, 0);
      if ( !v20 )
        goto LABEL_609;
      supportServantData = v422;
      v23 = 0;
      v405 = DataMasterBase_object__object__int___GetEntity(
               v20,
               gameObject,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_609;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
    if ( !MasterData_object )
      goto LABEL_609;
    v23 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v23 )
      goto LABEL_609;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v23[5].klass;
    monitor = v23[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v25);
    *(_QWORD *)&v437.fields.currentCryptoKey = klass;
    *(_QWORD *)&v437.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v437, 0);
    if ( !v26 )
      goto LABEL_609;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v26,
                            gameObject,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    supportServantData = v422;
  }
  else
  {
    v23 = 0;
  }
  equipTarget1 = 0;
  v405 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v407 = 0;
    v90 = v23;
    v91 = 1;
    goto LABEL_113;
  }
LABEL_37:
  v407 = equipTarget1;
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    v403 = v23;
    if ( !supportServantData->fields.isFriendInfo )
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_609;
      v128 = gameObject;
      gameObject = (__int64)UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_609;
      v130 = *(_QWORD *)(gameObject + 16);
      v131 = *(_QWORD *)(gameObject + 24);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v129);
      *(_QWORD *)&v439.fields.currentCryptoKey = v130;
      *(_QWORD *)&v439.fields.fakeValue = v131;
      baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v439, 0);
      gameObject = (__int64)UserServantEntity__GetServantEntity((UserServantEntity_o *)v128, -1, 0);
      if ( !gameObject )
        goto LABEL_609;
      v132 = (ServantEntity_o *)gameObject;
      svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(gameObject + 16),
                0);
      v417 = v132;
      classId = v132->fields.classId;
      gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v128, 0, 0);
      lv[1] = *(_DWORD *)(v128 + 400);
      if ( !gameObject )
        goto LABEL_609;
      v133 = *(_DWORD *)(gameObject + 20);
      v404 = (_DWORD *)gameObject;
      lv[0] = v133;
      if ( v23 )
        lv[0] = LODWORD(v23[25].monitor) + v133;
      AtkBoostValue = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)v128, 0);
      HpBoostValue = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)v128, 0);
      v136 = v404[4];
      v433 = v136;
      if ( v23 )
        v433 = HIDWORD(v23[25].monitor) + v136;
      rarity = v404[6];
      exceedCount = *(_DWORD *)(v128 + 440);
      frameType = UserServantEntity__GetFrameType((UserServantEntity_o *)v128, v404[10], 0);
      UserServantEntity__getSkillInfo((UserServantEntity_o *)v128, &skillInfoList, -1, -1, 1, 0, -1, 0);
      gameObject = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)v128, &tdInfo, -1, -1, 0, 0);
      if ( !tdInfo )
        goto LABEL_609;
      strengthStatus = tdInfo->fields.strengthStatus;
      v398 = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_50215100((UserServantEntity_o *)v128, &v430, 0);
      v410 = HpBoostValue;
      this->fields.isGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)v128, 0);
      v412 = AtkBoostValue;
      if ( v422->fields.eventSetupInfo )
      {
        if ( v23 )
        {
          v139 = v23[2];
          *(Il2CppObject *)&v426.fields.currentCryptoKey = v23[1];
          *(Il2CppObject *)&v426.fields.fakeValue = v139;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v137, v138);
          v425 = v426;
          v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v425, 0);
        }
        else
        {
          v140 = -1;
        }
        gameObject = sub_2213B20(long___TypeInfo, 1);
        if ( !gameObject )
          goto LABEL_609;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_610;
        *(_QWORD *)(gameObject + 32) = v140;
        EventUpVal_50186428 = UserServantEntity__getEventUpVal_50186428(
                                (UserServantEntity_o *)v128,
                                &eventUpVallInfo,
                                v422->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0,
                                1,
                                0,
                                1,
                                0);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_609;
        v148 = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v146, v147);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        objectb = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v150 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v150,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        eventSetupInfo = v422->fields.eventSetupInfo;
        if ( !eventSetupInfo )
          goto LABEL_609;
        eventIdList = eventSetupInfo->fields.eventIdList;
        v393 = UserServantLeaderEntity;
        if ( !eventIdList )
          goto LABEL_609;
        max_length = eventIdList->max_length;
        v154 = v417;
        if ( (int)max_length >= 1 )
        {
          v155 = 0;
          while ( 1 )
          {
            if ( v155 >= (unsigned int)max_length )
              goto LABEL_610;
            if ( !v148 )
              goto LABEL_609;
            v156 = eventIdList->m_Items[v155];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v148,
                                    v156,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !Master_object )
                goto LABEL_609;
              if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, v156, 0) )
              {
                v159 = *(_OWORD *)(v128 + 64);
                *(_OWORD *)&v426.fields.currentCryptoKey = *(_OWORD *)(v128 + 48);
                *(_OWORD *)&v426.fields.fakeValue = v159;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v157, v158);
                v424 = v426;
                v160 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v424, 0);
                gameObject = (__int64)objectb;
                if ( !objectb )
                  goto LABEL_609;
                if ( UserEventServantPointMaster__TryGetEntity(
                       (UserEventServantPointMaster_o *)objectb,
                       &entity,
                       v160,
                       v156,
                       svtId,
                       0) )
                {
                  gameObject = (__int64)entity;
                  if ( !entity )
                    goto LABEL_609;
                  BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
                }
                else
                {
                  BuddyPoint = 0;
                }
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                                 (EventServantPointRankMaster_o *)Master_object,
                                 v156,
                                 BuddyPoint,
                                 svtId,
                                 0);
                v163 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
                v164 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_48723060(v164, v156, 0);
                if ( !v164 )
                  goto LABEL_609;
                EventMargeItemUpValInfo__SetServantPointInfo(v164, BuddyPoint, v163, 0, 0);
                if ( !v150 )
                  goto LABEL_609;
                System_Collections_Generic_List_object___Insert(
                  v150,
                  0,
                  (Il2CppObject *)v164,
                  (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v154 = v417;
              }
              v165 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v165, v156, v154, 0);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_609;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
              if ( !v165 )
                goto LABEL_609;
              EventPersonalMargeUpValInfo__Add(v165, (EventDropItemUpValInfo_array *)gameObject, 0);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v165, 0);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v165, 0);
                if ( !gameObject )
                  goto LABEL_609;
                v172 = *(_DWORD *)(gameObject + 24);
                v173 = gameObject;
                if ( v172 >= 1 )
                  break;
              }
            }
LABEL_267:
            LODWORD(max_length) = eventIdList->max_length;
            if ( (__int64)++v155 >= (int)max_length )
              goto LABEL_268;
          }
          v174 = 0;
          while ( v174 < v172 )
          {
            v10 = *(_QWORD *)(v173 + 8LL * (int)v174 + 32);
            if ( !v10 )
              goto LABEL_609;
            if ( *(_DWORD *)(v10 + 60) != 111 )
            {
              if ( !v150 )
                goto LABEL_609;
              items = v150->fields._items;
              v176 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v150->fields._version;
              if ( !items )
                goto LABEL_609;
              v177 = v150->fields._size;
              if ( (unsigned int)v177 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v150,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
              }
              else
              {
                v178 = &items->obj.klass + v177;
                v150->fields._size = v177 + 1;
                v178[4] = (Il2CppClass *)v10;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v178 + 4), v10, v166, v167, v168, v169, v170, v171);
              }
            }
            v172 = *(_DWORD *)(v173 + 24);
            if ( (int)++v174 >= v172 )
              goto LABEL_267;
          }
LABEL_610:
          sub_2213CE4(gameObject);
        }
LABEL_268:
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_609;
        objecta = (Il2CppObject *)PartyOrganizationUtility__GetAddUpValInfos(
                                    (PartyOrganizationUtility_o *)gameObject,
                                    (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v150,
                                    0);
        UserServantLeaderEntity = v393;
        supportServantData = v422;
        v23 = v403;
      }
      else
      {
        supportServantData = v422;
        objecta = 0;
        EventUpVal_50186428 = 0;
      }
      codeIds = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v128, 0);
      QuestRestriction = 0;
      TimesToRestart = 0;
      IsDataLost = 0;
      v414 = 0;
      IsUniqueIndividualityRestriction = 0;
      UniqueSvtRestriction = 0;
      cardParams = 0;
LABEL_271:
      UserServantLeaderEntity__TryGetNarrowFigureLimitCountStage(
        UserServantLeaderEntity,
        &limitCountStage[1],
        limitCountStage,
        0);
      gameObject = (__int64)this->fields.servantNarrowTexture;
      if ( !gameObject )
        goto LABEL_609;
      UINarrowFigureTexture__SetCharacter(
        (UINarrowFigureTexture_o *)gameObject,
        limitCountStage[1],
        limitCountStage[0],
        0,
        0);
      servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v179, v180);
      if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
      {
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( IsDataLost )
        {
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        else
        {
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_609;
          ServantClassIconComponent__SetImage(
            (ServantClassIconComponent_o *)gameObject,
            classId,
            frameType,
            0,
            this->fields.isGrandServant,
            0,
            0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_609;
          ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)gameObject, 0, 0);
          gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
          v184 = this->fields.servantClassIcon;
          v185 = *(&SupportSelectItemDraw_TypeInfo->_2.cctor_finished + 1);
          if ( this->fields.isGrandServant )
          {
            if ( !v185 )
              j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v183);
            if ( !v184 )
              goto LABEL_609;
            ServantClassIconComponent__RePositionClassIcon(
              v184,
              SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition,
              0);
            gameObject = (__int64)this->fields.servantClassIcon;
            if ( !gameObject )
              goto LABEL_609;
            GrandClassNamePosition = SupportSelectItemDraw_TypeInfo->static_fields->GrandClassNamePosition;
          }
          else
          {
            if ( !v185 )
              j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v183);
            if ( !v184 )
              goto LABEL_609;
            ServantClassIconComponent__RePositionClassIcon(
              v184,
              SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition,
              0);
            gameObject = (__int64)this->fields.servantClassIcon;
            if ( !gameObject )
              goto LABEL_609;
            GrandClassNamePosition = SupportSelectItemDraw_TypeInfo->static_fields->ClassNamePosition;
          }
          ServantClassIconComponent__RePositionClassName(
            (ServantClassIconComponent_o *)gameObject,
            GrandClassNamePosition,
            0);
        }
      }
      levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v182);
      if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
      {
        v190 = this->fields.levelLabel;
        gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0);
        if ( !v190 )
          goto LABEL_609;
        UILabel__set_text(v190, (System_String_o *)gameObject, 0);
      }
      raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v188, v189);
      if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
      {
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_609;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_609;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v195 = lv[1];
        v196 = v404[10];
        if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v193, v194);
        Icon_47404732 = Rarity__getIcon_47404732(rarity, exceedCount, v195, v196, 0);
        if ( exceedCount < 1 )
          goto LABEL_313;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v197, v198);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_609;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v196, exceedCount, 0, 0, 0);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_609;
        if ( ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, v196, lv[1], RarityIcon, 0, 0) >= 3 )
        {
          v202 = this->fields.raritySprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v197, v198);
          AtlasManager__SetEventSprite(v202, Icon_47404732, 0);
          supportServantData = v422;
        }
        else
        {
LABEL_313:
          v201 = this->fields.raritySprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v197, v198);
          AtlasManager__SetCommon(v201, 0);
          gameObject = (__int64)this->fields.raritySprite;
          supportServantData = v422;
          if ( !gameObject )
            goto LABEL_609;
          UISprite__set_spriteName((UISprite_o *)gameObject, Icon_47404732, 0);
        }
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_609;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
          gameObject,
          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
        gameObject = (__int64)this->fields.raritySprite;
        v203 = exceedCount >= 1
             ? this->fields.baseRarityPosition.fields.x + 1.0
             : this->fields.baseRarityPosition.fields.x;
        if ( !gameObject )
          goto LABEL_609;
        y = this->fields.baseRarityPosition.fields.y;
        z = this->fields.baseRarityPosition.fields.z;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_609;
        v444.fields.x = v203;
        v444.fields.y = y;
        v444.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v444, 0);
      }
      skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v192);
      if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
      {
        gameObject = (__int64)this->fields.skillListTreasureDevice;
        if ( !gameObject )
          goto LABEL_609;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_609;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v210 = this->fields.skillListTreasureDevice;
        v211 = skillInfoList;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v208, v209);
        gameObject = (__int64)LocalizationManager__GetLevelList_48251096(v211, 0);
        if ( !v210 )
          goto LABEL_609;
        SkillListTreasureDeviceComponent__Set(
          v210,
          (System_String_o *)gameObject,
          v398,
          strengthStatus,
          treasureDeviceNum,
          0,
          0,
          0);
        gameObject = (__int64)this->fields.switchSkillUIList;
        if ( gameObject )
        {
          v217 = *(_QWORD *)(gameObject + 16);
          v10 = (unsigned __int64)this->fields.skillInfoUiWidget;
          v218 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(gameObject + 28);
          if ( !v217 )
            goto LABEL_609;
          v219 = *(int *)(gameObject + 24);
          if ( (unsigned int)v219 >= *(_DWORD *)(v217 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              (Il2CppObject *)v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
          }
          else
          {
            v220 = v217 + 8 * v219;
            *(_DWORD *)(gameObject + 24) = v219 + 1;
            *(_QWORD *)(v220 + 32) = v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v220 + 32), v10, v207, v212, v213, v214, v215, v216);
          }
        }
      }
      appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v207);
      if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
      {
        if ( v430 && v430->max_length )
        {
          gameObject = (__int64)this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v225 = this->fields.appendSkillList;
          v226 = v430;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v223, v224);
          gameObject = (__int64)LocalizationManager__GetLevelList_48251096(v226, 0);
          if ( !v225 )
            goto LABEL_609;
          AppendSkillListComponent__Set(v225, (System_String_o *)gameObject, 0);
          gameObject = (__int64)this->fields.switchSkillUIList;
          if ( gameObject )
          {
            v232 = *(_QWORD *)(gameObject + 16);
            v10 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
            v233 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++*(_DWORD *)(gameObject + 28);
            if ( !v232 )
              goto LABEL_609;
            v234 = *(int *)(gameObject + 24);
            if ( (unsigned int)v234 >= *(_DWORD *)(v232 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)gameObject,
                (Il2CppObject *)v10,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
            }
            else
            {
              v235 = v232 + 8 * v234;
              *(_DWORD *)(gameObject + 24) = v234 + 1;
              *(_QWORD *)(v235 + 32) = v10;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v235 + 32), v10, v222, v227, v228, v229, v230, v231);
            }
          }
        }
        else
        {
          gameObject = (__int64)this->fields.appendSkillList;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
      }
      switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v222);
      if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
      {
        v239 = this->fields.switchSkillUIList;
        if ( v239 )
        {
          v240 = this->fields.switchSkillInfo;
          gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v239,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v240 )
            goto LABEL_609;
          SwitchUIWidgetComponent__Set(v240, (UIWidget_array *)gameObject, 0, 0);
        }
      }
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v237, v238);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
      {
        gameObject = (__int64)this->fields.svtCommandCardList;
        if ( supportServantData->fields.isFriendInfo )
        {
          if ( !gameObject )
            goto LABEL_609;
          ServantCommandCardListComponent__Set_48038284(
            (ServantCommandCardListComponent_o *)gameObject,
            baseSvtId,
            svtId,
            cardParams,
            codeIds,
            2,
            0,
            0);
        }
        else
        {
          if ( !gameObject )
            goto LABEL_609;
          ServantCommandCardListComponent__Set_48038548(
            (ServantCommandCardListComponent_o *)gameObject,
            baseSvtId,
            svtId,
            codeIds,
            2,
            0,
            0);
        }
      }
      attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v242);
      if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
      {
        gameObject = (__int64)this->fields.attackLabel;
        if ( !gameObject )
          goto LABEL_609;
        v447.fields.r = 1.0;
        v447.fields.g = 0.92157;
        v447.fields.b = 0.015686;
        v447.fields.a = 1.0;
        if ( v412 <= 0 )
        {
          v447.fields.g = 1.0;
          v447.fields.b = 1.0;
        }
        UIWidget__set_color((UIWidget_o *)gameObject, v447, 0);
        v248 = this->fields.attackLabel;
        gameObject = (__int64)System_Int32__ToString_77138656((int32_t)lv, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        if ( !v248 )
          goto LABEL_609;
        UILabel__set_text(v248, (System_String_o *)gameObject, 0);
      }
      hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v244);
      if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
      {
        gameObject = (__int64)this->fields.hpLabel;
        if ( !gameObject )
          goto LABEL_609;
        v448.fields.r = 1.0;
        v448.fields.g = 0.92157;
        v448.fields.b = 0.015686;
        v448.fields.a = 1.0;
        if ( v410 <= 0 )
        {
          v448.fields.g = 1.0;
          v448.fields.b = 1.0;
        }
        UIWidget__set_color((UIWidget_o *)gameObject, v448, 0);
        v254 = this->fields.hpLabel;
        gameObject = (__int64)System_Int32__ToString_77138656((int32_t)&v433, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
        if ( !v254 )
          goto LABEL_609;
        UILabel__set_text(v254, (System_String_o *)gameObject, 0);
      }
      baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v250);
      if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
      {
        v258 = this->fields.baseSprite;
        baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
        isGrandServant = this->fields.isGrandServant;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v256, v257);
        AtlasManager__SetFormationBase(v258, frameType, baseDefaultUIAtlas, 0, isGrandServant, 0, 0);
        supportServantData = v422;
      }
      base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v256, v257);
      if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
      {
        v263 = this->fields.base2Sprite;
        base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
        v265 = this->fields.isGrandServant;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v262);
        AtlasManager__SetFormationFrameForSupportSelect(v263, frameType, base2DefaultUIAtlas, 0, v265, 0);
        supportServantData = v422;
      }
      gameObject = (__int64)this->fields.backClassIcon;
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_609;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v266, v267);
      if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
      {
        maskSpriteDefaultSpriteName = this->fields.maskSpriteDefaultSpriteName;
        maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
        v273 = QuestRestriction;
        v274 = this->fields.isGrandServant;
        v275 = this->fields.restrictionMaskSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v269, v270);
        gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                       v274,
                       v275,
                       maskSpriteDefaultSpriteName,
                       maskSpriteDefaultAtlas,
                       0);
        v277 = (UIWidget_o *)this->fields.restrictionMaskSprite;
        if ( (gameObject & 1) != 0 )
        {
          gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
          supportServantData = v422;
          QuestRestriction = v273;
          if ( !*(&SupportSelectItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v276);
          if ( !v277 )
            goto LABEL_609;
          UIWidget__set_width(v277, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
          gameObject = (__int64)this->fields.restrictionMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          UIWidget__set_height(
            (UIWidget_o *)gameObject,
            SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
            0);
          gameObject = (__int64)this->fields.restrictionMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          v23 = v403;
          if ( !gameObject )
            goto LABEL_609;
          v445.fields.z = 0.0;
          static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
          p_y = &static_fields->GrandMaskPosition05.fields.y;
          p_GrandMaskPosition05 = (struct UnityEngine_Vector3_o *)&static_fields->GrandMaskPosition05;
        }
        else
        {
          supportServantData = v422;
          if ( !v277 )
            goto LABEL_609;
          QuestRestriction = v273;
          UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultWidth, 0);
          gameObject = (__int64)this->fields.restrictionMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
          gameObject = (__int64)this->fields.restrictionMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          v445.fields.z = this->fields.maskSpriteDefaultPosition.fields.z;
          v23 = v403;
          p_GrandMaskPosition05 = &this->fields.maskSpriteDefaultPosition;
          p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
        }
        v445.fields.y = *p_y;
        v445.fields.x = p_GrandMaskPosition05->fields.x;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v445, 0);
      }
      sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v269, v270);
      if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
      {
        defaultSortieMaskAtlas = this->fields.defaultSortieMaskAtlas;
        defaultSortieMaskSpriteName = this->fields.defaultSortieMaskSpriteName;
        v287 = QuestRestriction;
        v288 = this->fields.isGrandServant;
        v289 = this->fields.sortieMaskSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v282, v283);
        gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                       v288,
                       v289,
                       defaultSortieMaskSpriteName,
                       defaultSortieMaskAtlas,
                       0);
        v291 = (UIWidget_o *)this->fields.sortieMaskSprite;
        if ( (gameObject & 1) != 0 )
        {
          gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
          supportServantData = v422;
          QuestRestriction = v287;
          if ( !*(&SupportSelectItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v290);
          if ( !v291 )
            goto LABEL_609;
          UIWidget__set_width(v291, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
          gameObject = (__int64)this->fields.sortieMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          UIWidget__set_height(
            (UIWidget_o *)gameObject,
            SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
            0);
          gameObject = (__int64)this->fields.sortieMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          v23 = v403;
          v292 = SupportSelectItemDraw_TypeInfo->static_fields;
          v293 = &v292->GrandMaskPosition05.fields.y;
          p_defaultSortieMaskPosition = &v292->GrandMaskPosition05;
        }
        else
        {
          supportServantData = v422;
          if ( !v291 )
            goto LABEL_609;
          QuestRestriction = v287;
          UIWidget__set_width((UIWidget_o *)this->fields.sortieMaskSprite, this->fields.defaultSortieMaskWidth, 0);
          gameObject = (__int64)this->fields.sortieMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultSortieMaskHeight, 0);
          gameObject = (__int64)this->fields.sortieMaskSprite;
          v23 = v403;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          v293 = &this->fields.defaultSortieMaskPosition.fields.y;
          p_defaultSortieMaskPosition = &this->fields.defaultSortieMaskPosition;
        }
        v446.fields.z = 0.0;
        v446.fields.y = *v293;
        v446.fields.x = p_defaultSortieMaskPosition->fields.x;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v446, 0);
      }
      if ( ((v414 | QuestRestriction) & 1) != 0 )
      {
        v295 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v282, v283);
        if ( UnityEngine_Object__op_Inequality(v295, 0, 0) )
        {
          gameObject = (__int64)this->fields.sortieMaskSprite;
          if ( !gameObject )
            goto LABEL_609;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_609;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v296);
        v297 = LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
        goto LABEL_449;
      }
      if ( supportServantData->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(v417, 0) )
        goto LABEL_462;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v282, v283);
      if ( TutorialFlag__Get_47388504(126, 0) )
      {
        v304 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v282, v283);
        if ( !UnityEngine_Object__op_Inequality(v304, 0, 0) )
          goto LABEL_480;
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_609;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_609;
        v305 = 1;
      }
      else
      {
LABEL_462:
        if ( IsUniqueIndividualityRestriction || UniqueSvtRestriction )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v282, v283);
          v306 = LocalizationManager__Get((System_String_o *)StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
          SupportSelectItemDraw__SetWarningMessage(this, v306, 1, v307);
LABEL_481:
          friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v302, v303);
          if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0, 0) )
          {
            friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v312);
            if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0, 0) )
            {
              gameObject = (__int64)this->fields.friendPointBonusBase;
              if ( !gameObject )
                goto LABEL_609;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
            }
          }
          eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
          v90 = v23;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v312);
          gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
          v91 = 0;
          if ( eventFriendPoints && (gameObject & 1) != 0 )
          {
            v315 = eventFriendPoints->max_length;
            if ( v315 >= 1 )
            {
              v316 = 0;
              eventId = 0;
              value = 0;
              m_Items = eventFriendPoints->m_Items;
              do
              {
                if ( (unsigned int)v316 >= v315 )
                  goto LABEL_610;
                v320 = m_Items[v316];
                if ( !v320 )
                  goto LABEL_609;
                gameObject = System_Array__IndexOf_int_(
                               v320->fields.targetIds,
                               svtId,
                               (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
                v315 = eventFriendPoints->max_length;
                if ( (unsigned int)v316 >= v315 )
                  goto LABEL_610;
                v321 = m_Items[v316];
                if ( !v321 )
                  goto LABEL_609;
                targetIds = v321->fields.targetIds;
                if ( (!targetIds || (gameObject & 0x80000000) == 0 || !LODWORD(targetIds->max_length))
                  && value < v321->fields.value )
                {
                  eventId = v321->fields.eventId;
                  value = v321->fields.value;
                }
                ++v316;
              }
              while ( (int)v316 < v315 );
              if ( value < 1 )
              {
                supportServantData = v422;
              }
              else
              {
                v323 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
                v324 = v323;
                if ( objecta )
                  System_Collections_Generic_List_object____ctor_71841080(
                    v323,
                    (System_Collections_Generic_IEnumerable_T__o *)objecta,
                    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___91646752);
                else
                  System_Collections_Generic_List_object____ctor(
                    v323,
                    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
                v325 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_48722980(v325, eventId, value, 0);
                if ( !v324 )
                  goto LABEL_609;
                v332 = v324->fields._items;
                supportServantData = v422;
                v333 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v324->fields._version;
                if ( !v332 )
                  goto LABEL_609;
                v334 = v324->fields._size;
                if ( (unsigned int)v334 >= LODWORD(v332->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v324,
                    (Il2CppObject *)v325,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v333[4] + 192LL) + 112LL));
                }
                else
                {
                  v335 = &v332->obj.klass + v334;
                  v324->fields._size = v334 + 1;
                  v335[4] = (Il2CppClass *)v325;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v335 + 4),
                    (int32_t)v325,
                    v326,
                    v327,
                    v328,
                    v329,
                    v330,
                    v331);
                }
                objecta = (Il2CppObject *)System_Collections_Generic_List_object___ToArray(
                                            v324,
                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              }
            }
            v91 = 0;
          }
          goto LABEL_517;
        }
        if ( IsDataLost )
        {
          v299 = this;
          v300 = 0;
          v301 = 1;
          v298 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_450;
        }
        if ( TimesToRestart >= 1 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v282, v283);
          v308 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
          LODWORD(v426.fields.currentCryptoKey) = TimesToRestart;
          v309 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v426);
          v297 = System_String__Format(v308, v309, 0);
LABEL_449:
          v298 = v297;
          v299 = this;
          v300 = 1;
          v301 = 0;
LABEL_450:
          SupportSelectItemDraw__SetMaskMessage(v299, v298, v300, v301, v284);
          goto LABEL_481;
        }
        v310 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v282, v283);
        if ( !UnityEngine_Object__op_Inequality(v310, 0, 0) )
        {
LABEL_480:
          SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v10);
          goto LABEL_481;
        }
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_609;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_609;
        v305 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v305, 0);
      goto LABEL_480;
    }
    gameObject = (__int64)UserServantLeaderEntity->fields.servantLeaderInfo;
    if ( !gameObject )
      goto LABEL_609;
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    gameObject = (__int64)ServantLeaderInfo__get_BaseServantEntity((ServantLeaderInfo_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    v30 = *(_QWORD *)(gameObject + 16);
    v31 = *(_QWORD *)(gameObject + 24);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v29);
    *(_QWORD *)&v438.fields.currentCryptoKey = v30;
    *(_QWORD *)&v438.fields.fakeValue = v31;
    v32 = servantLeaderInfo;
    baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v438, 0);
    gameObject = (__int64)ServantLeaderInfo__GetServantEntity(servantLeaderInfo, -1, 0);
    if ( !gameObject )
      goto LABEL_609;
    v33 = (ServantEntity_o *)gameObject;
    svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(gameObject + 16),
              0);
    v417 = v33;
    classId = v33->fields.classId;
    gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    lv[1] = servantLeaderInfo->fields.lv;
    if ( !gameObject )
      goto LABEL_609;
    v34 = *(_DWORD *)(gameObject + 20);
    v404 = (_DWORD *)gameObject;
    lv[0] = v34;
    if ( equipTarget1 )
      lv[0] = equipTarget1->fields.atk + v34;
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_609;
    AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)gameObject, 0);
    adjustHp = servantLeaderInfo->fields.adjustHp;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_609;
    AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)gameObject, 0);
    v35 = v404[4];
    v433 = v35;
    if ( equipTarget1 )
      v433 = equipTarget1->fields.hp + v35;
    rarity = v404[6];
    exceedCount = servantLeaderInfo->fields.exceedCount;
    frameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v404[10], 0);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, -1, 0);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, -1, 0);
    if ( !tdInfo )
      goto LABEL_609;
    strengthStatus = tdInfo->fields.strengthStatus;
    v398 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_50601788(servantLeaderInfo, &v430, 0, 0);
    gameObject = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
    this->fields.isGrandServant = gameObject & 1;
    v36 = supportServantData->fields.eventSetupInfo;
    if ( !v36 )
      goto LABEL_188;
    v37 = v36->fields.eventIdList;
    if ( !v37 )
      goto LABEL_609;
    if ( v37->max_length )
    {
      v394 = this;
      EventUpVal = ServantLeaderInfo__getEventUpVal(
                     servantLeaderInfo,
                     &eventUpVallInfo,
                     v36,
                     supportServantData->fields.questRestrictionInfo == 0,
                     0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v39);
      v41 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v42 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v43 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
      v44 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v45 = supportServantData->fields.eventSetupInfo;
      if ( !v45 )
        goto LABEL_609;
      v46 = v45->fields.eventIdList;
      v409 = (EventServantPointRankMaster_o *)v42;
      EventUpVal_50186428 = EventUpVal;
      if ( !v46 )
        goto LABEL_609;
      v47 = v46->max_length;
      if ( (int)v47 >= 1 )
      {
        v48 = 0;
        v411 = v46;
        v413 = v41;
        while ( 1 )
        {
          if ( v48 >= (unsigned int)v47 )
            goto LABEL_610;
          v49 = v46->m_Items[v48];
          object = (Il2CppObject *)sub_2213CCC(SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
          System_Object___ctor(object, 0);
          if ( !v41 )
            goto LABEL_609;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                                  v49,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                (gameObject & 1) == 0) )
          {
            if ( !v409 )
              goto LABEL_609;
            if ( EventServantPointRankMaster__IsEnableEvent(v409, v49, 0) )
            {
              v50 = EventServantPointRankMaster__GetEnableEntity(
                      v409,
                      v49,
                      servantLeaderInfo->fields.eventSvtPoint,
                      svtId,
                      0);
              if ( v50 )
                svtPointRank = v50->fields.svtPointRank;
              else
                svtPointRank = 0;
              v52 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_48723060(v52, v49, 0);
              if ( !v52 )
                goto LABEL_609;
              EventMargeItemUpValInfo__SetServantPointInfo(
                v52,
                servantLeaderInfo->fields.eventSvtPoint,
                svtPointRank,
                1,
                0);
              if ( !v44 )
                goto LABEL_609;
              System_Collections_Generic_List_object___Insert(
                v44,
                0,
                (Il2CppObject *)v52,
                (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            }
            v53 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v53, v49, v417, 0);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_609;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
            if ( !v53 )
              goto LABEL_609;
            EventPersonalMargeUpValInfo__Add(v53, (EventDropItemUpValInfo_array *)gameObject, 0);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v53, 0);
            if ( (gameObject & 1) == 0 )
            {
              if ( supportServantData->fields.questRestrictionInfo )
              {
                gameObject = (__int64)supportServantData->fields.eventSetupInfo;
                if ( !gameObject )
                  goto LABEL_609;
                gameObject = (__int64)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                        (EventUpValSetupInfo_o *)gameObject,
                                        v49,
                                        0);
                v10 = gameObject;
              }
              else
              {
                v10 = 0;
              }
              if ( !object )
                goto LABEL_609;
              object[1].klass = (Il2CppClass *)v10;
              v60 = (System_Collections_ICollection_o **)&object[1];
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&object[1], v10, v54, v55, v56, v57, v58, v59);
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v53, 0);
              if ( !gameObject )
                goto LABEL_609;
              v67 = *(_QWORD *)(gameObject + 24);
              v68 = gameObject;
              if ( (int)v67 >= 1 )
                break;
            }
          }
LABEL_106:
          v46 = v411;
          v41 = v413;
          ++v48;
          LODWORD(v47) = v411->max_length;
          if ( (__int64)v48 >= (int)v47 )
            goto LABEL_107;
        }
        v69 = 0;
        while ( v69 < (unsigned int)v67 )
        {
          v70 = *(Il2CppObject **)(v68 + 32 + 8 * v69);
          if ( !supportServantData->fields.questRestrictionInfo )
            goto LABEL_613;
          if ( !v70 )
            goto LABEL_609;
          v71 = v70[2].monitor;
          if ( !v71 )
            goto LABEL_609;
          if ( !v43 )
            goto LABEL_609;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
                                  v71[4],
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( !gameObject )
            goto LABEL_609;
          v72 = *(_DWORD *)(gameObject + 24);
          v73 = gameObject;
          if ( v72 == 1 || v72 == 16 )
            goto LABEL_614;
          questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_609;
          if ( v49 == questRestrictionInfo->fields.eventId )
          {
LABEL_614:
            v75 = *(_QWORD *)(gameObject + 80);
            if ( !v75 )
              goto LABEL_609;
            if ( !*(_QWORD *)(v75 + 24) )
              goto LABEL_613;
            gameObject = BasicHelper__IsNullOrEmpty(*v60, 0);
            if ( (gameObject & 1) == 0 )
            {
              v76 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v73 + 80);
              v77 = (System_Func_int__bool__o *)object[1].monitor;
              if ( !v77 )
              {
                v77 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v77,
                  object,
                  Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__,
                  0);
                object[1].monitor = v77;
                v60 = (System_Collections_ICollection_o **)&object[1];
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&object[1].monitor,
                  (int32_t)v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83);
              }
              gameObject = System_Linq_Enumerable__Any_int__59144800(
                             v76,
                             (System_Func_TSource__bool__o *)v77,
                             (const MethodInfo_3867A60 *)Method_System_Linq_Enumerable_Any_int____91750072);
              supportServantData = v422;
              if ( (gameObject & 1) != 0 )
              {
LABEL_613:
                if ( !v44 )
                  goto LABEL_609;
                v84 = v44->fields._items;
                v85 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v44->fields._version;
                if ( !v84 )
                  goto LABEL_609;
                v86 = v44->fields._size;
                if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v44,
                    v70,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                }
                else
                {
                  v87 = &v84->obj.klass + v86;
                  v44->fields._size = v86 + 1;
                  v87[4] = (Il2CppClass *)v70;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v87 + 4), (int32_t)v70, v61, v62, v63, v64, v65, v66);
                }
              }
            }
          }
          LODWORD(v67) = *(_DWORD *)(v68 + 24);
          if ( (__int64)++v69 >= (int)v67 )
            goto LABEL_106;
        }
        goto LABEL_610;
      }
LABEL_107:
      v88 = supportServantData->fields.questRestrictionInfo;
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( v88 )
      {
        v23 = v403;
        if ( !gameObject )
          goto LABEL_609;
        AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)gameObject, &isDuplicate, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v44, 0);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v32 = servantLeaderInfo;
        if ( !gameObject )
          goto LABEL_609;
        objecta = (Il2CppObject *)PartyOrganizationUtility__GetAddUpValInfos(
                                    (PartyOrganizationUtility_o *)gameObject,
                                    AdjustUpValInfoArray,
                                    0);
        this = v394;
      }
      else
      {
        v23 = v403;
        if ( !gameObject )
          goto LABEL_609;
        objecta = (Il2CppObject *)PartyOrganizationUtility__GetAddUpValInfos(
                                    (PartyOrganizationUtility_o *)gameObject,
                                    (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v44,
                                    0);
        this = v394;
        v32 = servantLeaderInfo;
      }
    }
    else
    {
LABEL_188:
      objecta = 0;
      EventUpVal_50186428 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(v32, 0);
    cardParams = v32->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(v32, supportServantData->fields.questRestrictionInfo, 0);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             v32,
                             supportServantData->fields.questRestrictionInfo,
                             0);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         v32,
                                         supportServantData->fields.questRestrictionInfo,
                                         0,
                                         0);
    if ( ServantLeaderInfo__IsSlotRestriction(v32, supportServantData->fields.questRestrictionInfo, 0) )
    {
      v414 = 1;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_609;
      v141 = *(_DWORD *)(gameObject + 80);
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_609;
      if ( v141 < 1 )
      {
        v414 = 0;
      }
      else
      {
        v32 = servantLeaderInfo;
        if ( !supportServantData->fields.questRestrictionInfo )
          goto LABEL_609;
        v142 = *(_DWORD *)(gameObject + 84);
        if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                supportServantData->fields.questRestrictionInfo,
                v142,
                0) )
        {
          v414 = 0;
          goto LABEL_220;
        }
        v143 = supportServantData->fields.questRestrictionInfo;
        limitCount = servantLeaderInfo->fields.limitCount;
        gameObject = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(servantLeaderInfo, -1, 0);
        if ( !v143 )
          goto LABEL_609;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v143,
                                              svtId,
                                              limitCount,
                                              gameObject,
                                              v142,
                                              1,
                                              0);
        supportServantData = v422;
        v414 = IsRestrictionServantIndividuality;
      }
      v32 = servantLeaderInfo;
    }
LABEL_220:
    v412 = AddedAtk + adjustAtk;
    v410 = AddedHp + adjustHp;
    IsDataLost = ServantLeaderInfo__IsDataLost(v32, supportServantData->fields.questRestrictionInfo, 0);
    TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v32, supportServantData->fields.questRestrictionInfo, 0);
    goto LABEL_271;
  }
  v90 = v23;
  v91 = 0;
LABEL_113:
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_609;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_609;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  backClassIcon = this->fields.backClassIcon;
  gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  if ( !*(&SupportSelectItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v92);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  }
  v94 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
  if ( !v94 )
    goto LABEL_609;
  if ( *(_DWORD *)(v94 + 24) <= (unsigned int)classPos )
    goto LABEL_610;
  if ( !backClassIcon )
    goto LABEL_609;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v94 + 8LL * classPos + 32), 0);
  v97 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95, v96);
  if ( UnityEngine_Object__op_Inequality(v97, 0, 0) )
  {
    v100 = this->fields.baseSprite;
    v101 = this->fields.baseDefaultUIAtlas;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v98, v99);
    AtlasManager__SetFormationBase(v100, 9, v101, 0, 0, 0, 0);
  }
  v102 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98, v99);
  if ( UnityEngine_Object__op_Inequality(v102, 0, 0) )
  {
    v105 = this->fields.base2Sprite;
    v106 = this->fields.base2DefaultUIAtlas;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v103, v104);
    AtlasManager__SetFormationFrameForSupportSelect(v105, 9, v106, 0, 0, 0);
  }
  v107 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103, v104);
  if ( UnityEngine_Object__op_Inequality(v107, 0, 0) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v109 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v108);
  if ( UnityEngine_Object__op_Inequality(v109, 0, 0) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_609;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v111 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v110);
  if ( UnityEngine_Object__op_Inequality(v111, 0, 0) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v113 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v112);
  if ( UnityEngine_Object__op_Inequality(v113, 0, 0) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_609;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v115 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v114);
  if ( UnityEngine_Object__op_Inequality(v115, 0, 0) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_609;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v117 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v116);
  if ( UnityEngine_Object__op_Inequality(v117, 0, 0) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v10);
  v120 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v118, v119);
  if ( UnityEngine_Object__op_Inequality(v120, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v122 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v121);
  if ( UnityEngine_Object__op_Inequality(v122, 0, 0) )
  {
    gameObject = (__int64)this->fields.appendSkillList;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v124 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v123);
  if ( UnityEngine_Object__op_Inequality(v124, 0, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_609;
    ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
  }
  v126 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v125);
  if ( UnityEngine_Object__op_Inequality(v126, 0, 0) )
  {
    gameObject = (__int64)this->fields.friendPointBonusBase;
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  objecta = 0;
  EventUpVal_50186428 = 0;
LABEL_517:
  if ( v90 )
  {
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_609;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_609;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v338 = v90[5].klass;
    v339 = v90[5].monitor;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v336, v337);
    *(_QWORD *)&v440.fields.currentCryptoKey = v338;
    *(_QWORD *)&v440.fields.fakeValue = v339;
    v343 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v440, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v341, v342);
    AtlasManager__SetEquipFace(equipSprite, v343, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    supportServantData = v422;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v344, v345);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      v348 = v90[6].klass;
      v349 = v90[6].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v347);
      *(_QWORD *)&v441.fields.currentCryptoKey = v348;
      *(_QWORD *)&v441.fields.fakeValue = v349;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v441, 0);
      if ( !this->fields.equipLimitCountSprite )
        goto LABEL_609;
      v350 = gameObject;
      gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_547:
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( v350 >= 4 )
      {
        if ( !v405 )
          goto LABEL_609;
        v10 = SLODWORD(v405[5].monitor) >= v350;
      }
      else
      {
        v10 = 0;
      }
      if ( gameObject )
      {
LABEL_552:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
        goto LABEL_553;
      }
LABEL_609:
      sub_2213CDC(gameObject, v10);
    }
  }
  else
  {
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( v407 )
    {
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_609;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_609;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v353 = *(_QWORD *)&v407->fields.svtId.fields.currentCryptoKey;
      v354 = *(_QWORD *)&v407->fields.svtId.fields.fakeValue;
      v355 = (UISprite_o *)this->fields.equipSprite;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v351, v352);
      *(_QWORD *)&v442.fields.currentCryptoKey = v353;
      *(_QWORD *)&v442.fields.fakeValue = v354;
      v356 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v442, 0);
      ImagePartsGroupIdxs_k__BackingField = v407->fields._ImagePartsGroupIdxs_k__BackingField;
      v360 = v356;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v357, v358);
      AtlasManager__SetEquipFace(v355, v360, ImagePartsGroupIdxs_k__BackingField, 0);
      v363 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v361, v362);
      supportServantData = v422;
      if ( UnityEngine_Object__op_Inequality(v363, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_609;
        v350 = v407->fields.limitCount;
        goto LABEL_547;
      }
    }
    else
    {
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_609;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_609;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_609;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v384 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v382, v383);
      if ( UnityEngine_Object__op_Inequality(v384, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_609;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_609;
        LOBYTE(v10) = 0;
        goto LABEL_552;
      }
    }
  }
LABEL_553:
  v364 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v347);
  if ( UnityEngine_Object__op_Inequality(v364, 0, 0) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v91 & 1) == 0 )
      {
        v366 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v366 )
        {
          gameObject = ServantLeaderInfo__GetServantId(v366, -1, 0);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_609;
          v367 = gameObject;
          v368 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
LABEL_570:
          v373 = v368;
          goto LABEL_572;
        }
      }
    }
    else if ( (v91 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        gameObject = UserServantEntity__GetServantId(userServantEntity, -1, 0);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_609;
        v367 = gameObject;
        v368 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0);
        goto LABEL_570;
      }
    }
    v373 = -1;
    v367 = -1;
LABEL_572:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_609;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)objecta,
      v367,
      v373,
      equipSvtId,
      0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v375, v376);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_609;
      v371 = 0;
      goto LABEL_581;
    }
    goto LABEL_582;
  }
  v369 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v365);
  if ( UnityEngine_Object__op_Inequality(v369, 0, 0) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_609;
    v371 = EventUpVal_50186428;
LABEL_581:
    ShiningIconComponent__Set_48066308((ShiningIconComponent_o *)gameObject, v371, 0);
  }
LABEL_582:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v370);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_609;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v379);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        pushUserServantId = supportServantData->fields.pushUserServantId;
        if ( !pushUserServantId )
          return;
        if ( !v91 )
        {
          if ( pushUserServantId != UserServantLeaderEntity->fields.userSvtId )
            return;
          gameObject = (__int64)this->fields.pushSprite;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_609;
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UISprite_o *v15; // x21
  __int64 v16; // x2
  UIWidget_o *v17; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x8
  float *p_y; // x9
  _BOOL4 isGrandServant; // w23
  UISprite_o *v22; // x22
  UIAtlas_o *maskSpriteDefaultAtlas; // x21
  __int64 v24; // x2
  UIWidget_o *sortieMaskSprite; // x21
  struct SupportSelectItemDraw_StaticFields *v26; // x8
  float v27; // s0
  float v28; // s8
  UnityEngine_Transform_o *v29; // x20
  float restrictionMaskMessageWidth; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CC4E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportSelectItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21382/*"img_frames_mask05"*/);
    sub_2213A60(&StringLiteral_19314/*"datalost_party_edit"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CC4E = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isScale);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_57;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    if ( isDataLost )
    {
      v15 = this->fields.restrictionMaskSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
      AtlasManager__SetPartyOrganizationImage(v15, (System_String_o *)StringLiteral_19314/*"datalost_party_edit"*/, 0);
      v17 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !*(&SupportSelectItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v16);
      if ( !v17 )
        goto LABEL_57;
      UIWidget__set_width(v17, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_57;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_57;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_57;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      v34.fields.z = static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
    }
    else
    {
      isGrandServant = this->fields.isGrandServant;
      v22 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
      if ( AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
             isGrandServant,
             v22,
             (System_String_o *)StringLiteral_21382/*"img_frames_mask05"*/,
             maskSpriteDefaultAtlas,
             0) )
      {
        sortieMaskSprite = (UIWidget_o *)this->fields.sortieMaskSprite;
        gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
        if ( !*(&SupportSelectItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo, v10, v24);
        if ( !sortieMaskSprite )
          goto LABEL_57;
        UIWidget__set_width(sortieMaskSprite, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_57;
        UIWidget__set_height(
          (UIWidget_o *)gameObject,
          SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
          0);
        gameObject = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_57;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_57;
        v34.fields.z = 0.0;
        v26 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v26->GrandMaskPosition05.fields.y;
        p_DATA_LOST_MASK_POSITION = (struct UnityEngine_Vector3_o *)&v26->GrandMaskPosition05;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_57;
        UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_57;
        UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_57;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_57;
        v34.fields.z = this->fields.maskSpriteDefaultPosition.fields.z;
        p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
    }
    v34.fields.y = *p_y;
    v34.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v34, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( isScale )
    {
      if ( !gameObject )
        goto LABEL_57;
      LODWORD(v27) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_57;
      v28 = v27;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v29 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v28 <= restrictionMaskMessageWidth )
      {
        if ( !byte_5969AE5 )
        {
          gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionMaskMessageWidth / v28;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v29 )
        goto LABEL_57;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_57;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v29 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v29 )
        goto LABEL_57;
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    UnityEngine_Transform__set_localScale(v29, oneVector, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_57:
    sub_2213CDC(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v13; // x20
  float restrictionWarningMessageWidth; // s0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CC4F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CC4F = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, isScale);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_34;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_34;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_34;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_34;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_34;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( isScale )
    {
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v13 = (UnityEngine_Transform_o *)gameObject;
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_5969AE5 )
        {
          gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionWarningMessageWidth / printedSize.fields.x;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v13 )
        goto LABEL_34;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v13 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE5 )
      {
        gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v13 )
        goto LABEL_34;
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    UnityEngine_Transform__set_localScale(v13, oneVector, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v18.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v18.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        v18.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v18, 0);
        return;
      }
    }
LABEL_34:
    sub_2213CDC(gameObject, v8);
  }
}


void SupportSelectItemDraw___c__DisplayClass66_0___ctor(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectItemDraw___c__DisplayClass66_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  if ( (byte_596CC54 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596CC54 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questIndividualityArray,
           individuality,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}