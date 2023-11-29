void __fastcall ServantStatusFlavorTextListViewItemDrawText2___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  ServantStatusFlavorTextListViewItemDrawText2_c *v10; // x8
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  struct ServantStatusFlavorTextListViewItemDrawText2_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_410191D & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19428, v8);
    sub_B16FFC(&StringLiteral_19427, v9);
    byte_410191D = 1;
  }
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->LABEL_HEIGHT_MAX = 3000;
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 168;
  v10 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -88;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19427;
  static_fields->TITLE_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_19427;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->TITLE_BASE_SPRITE_NAME, v12, v2, v3, v4, v5, v6, v7);
  v13 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19428;
  v13->TITLE_BASE_LONG_SPRITE_NAME = (struct System_String_o *)StringLiteral_19428;
  sub_B16F98((BattleServantConfConponent_o *)&v13->TITLE_BASE_LONG_SPRITE_NAME, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2___ctor(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_int__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_bool__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Collections_Generic_List_bool__o *v57; // x20
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7

  if ( (byte_410191C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UILabel___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_UILabel__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v12);
    byte_410191C = 1;
  }
  LOBYTE(this->fields.mainTextList) = 1;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyTextList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.textPositionYList = (struct System_Collections_Generic_List_int__o *)v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.textPositionYList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v35 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v31,
                                                    v32,
                                                    v33,
                                                    v34);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rubyFlagList = (struct System_Collections_Generic_List_bool__o *)v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyFlagList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v46 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v42,
                                                     v43,
                                                     v44,
                                                     v45);
  System_Collections_Generic_List_bool____ctor(
    v46,
    (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyLineList,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v57 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v53,
                                                     v54,
                                                     v55,
                                                     v56);
  System_Collections_Generic_List_bool____ctor(
    v57,
    (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainList,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UILabel__TypeInfo,
                                                                                                  v64,
                                                                                                  v65,
                                                                                                  v66,
                                                                                                  v67);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v68;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyList,
    (System_Int32_array **)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UILabel__TypeInfo,
                                                                                                  v75,
                                                                                                  v76,
                                                                                                  v77,
                                                                                                  v78);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  *(_QWORD *)&this->fields.notRubyFlag = v79;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.notRubyFlag,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  LOBYTE(this->fields.addSize.fields.y) = 1;
  *(_DWORD *)&this->fields.continueRuby = 0;
  LODWORD(this[1].klass) = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__Awake(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText2__GetKind(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  return 2;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *rubyPrefab; // x0
  UISprite_o *titleNumSprite; // x19
  UISprite_o *v8; // x21
  struct UnityEngine_GameObject_o *v9; // x0
  struct UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_o *v11; // x0
  struct UnityEngine_GameObject_o *v12; // x0
  struct UnityEngine_GameObject_o *v13; // x0
  float v14; // s0
  UnityEngine_Component_o *v15; // x0
  struct UnityEngine_GameObject_o *v16; // x0
  struct UnityEngine_GameObject_o *v17; // x20
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  UnityEngine_Transform_o *transform; // x0
  float v22; // s8
  UnityEngine_Component_o *v23; // x0
  float v24; // s8
  struct UnityEngine_GameObject_o *v25; // x19

  if ( (byte_4101916 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_4101916 = 1;
  }
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    rubyPrefab = this->fields.rubyPrefab;
    if ( rubyPrefab )
    {
      UILabel__set_text((UILabel_o *)rubyPrefab, (System_String_o *)StringLiteral_1, 0LL);
      titleNumSprite = this->fields.titleNumSprite;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( titleNumSprite )
      {
        UISprite__set_spriteName(
          titleNumSprite,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
    }
LABEL_39:
    sub_B170D4();
  }
  v8 = this->fields.titleNumSprite;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  }
  if ( !v8 )
    goto LABEL_39;
  UISprite__set_spriteName(
    v8,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
    0LL);
  v9 = this->fields.rubyPrefab;
  if ( !v9 )
    goto LABEL_39;
  UILabel__set_overflowMethod((UILabel_o *)v9, 2, 0LL);
  v10 = this->fields.rubyPrefab;
  if ( !v10 )
    goto LABEL_39;
  UILabel__set_alignment((UILabel_o *)v10, 2, 0LL);
  v11 = this->fields.rubyPrefab;
  if ( !v11 )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)v11, title, 0LL);
  v12 = this->fields.rubyPrefab;
  if ( !v12 )
    goto LABEL_39;
  ((void (__fastcall *)(struct UnityEngine_GameObject_o *, void *))v12->klass[2]._1.typeMetadataHandle)(
    v12,
    v12->klass[2]._1.interopData);
  v13 = this->fields.rubyPrefab;
  if ( !v13 )
    goto LABEL_39;
  (*(void (__fastcall **)(struct UnityEngine_GameObject_o *, Il2CppMethodPointer))&v13->klass[1]._2.naturalAligment)(
    v13,
    v13->klass[1].vtable._0_Equals.methodPtr);
  v15 = (UnityEngine_Component_o *)this->fields.rubyPrefab;
  if ( !v15 )
    goto LABEL_39;
  if ( v14 >= (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
  {
    transform = UnityEngine_Component__get_transform(v15, 0LL);
    if ( !transform )
      goto LABEL_39;
    LODWORD(v22) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    }
    v23 = (UnityEngine_Component_o *)this->fields.rubyPrefab;
    if ( !v23 )
      goto LABEL_39;
    v24 = (float)(1.0 - v22)
        * (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
    TITLE_NAME_LEFT_POS = v24
                        + (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  else
  {
    UILabel__set_overflowMethod((UILabel_o *)v15, 0, 0LL);
    v16 = this->fields.rubyPrefab;
    if ( !v16 )
      goto LABEL_39;
    UILabel__set_alignment((UILabel_o *)v16, 1, 0LL);
    v17 = this->fields.rubyPrefab;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    }
    if ( !v17 )
      goto LABEL_39;
    UIWidget__set_width(
      (UIWidget_o *)v17,
      ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
    v18 = (UnityEngine_Component_o *)this->fields.rubyPrefab;
    if ( !v18 )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
  }
  GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
  v25 = this->fields.rubyPrefab;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
  }
  if ( !v25 )
    goto LABEL_39;
  UILabel__SetCondensedScale(
    (UILabel_o *)v25,
    ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetItem(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *messageLabel; // x24
  UnityEngine_Behaviour_o *v18; // x0
  bool v19; // w1
  struct UILabel_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct UILabel_o *v23; // x0
  UIWidget_o *newIcon; // x23
  int32_t mHeight; // w24
  ServantStatusFlavorTextListViewItemDrawText2_c *v26; // x0
  const MethodInfo *v27; // x2
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  UnityEngine_Behaviour_o *v31; // x0
  struct ShiningIconComponent_o *v32; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UIWidget_o *v34; // x0
  float v35; // s0
  double v36; // d0
  int v37; // w22
  UnityEngine_Object_o *baseSprite; // x23
  int v39; // w24
  UnityEngine_BoxCollider_o *v40; // x0
  int v41; // s0
  float v42; // s1
  UnityEngine_BoxCollider_o *v44; // x0
  float v45; // s1
  UnityEngine_Object_o *titleBase; // x22
  UIWidget_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_Transform_o *transform; // x0
  float v50; // s0
  float v51; // s1
  float v52; // s2
  UnityEngine_Component_o *v53; // x0
  int v54; // w22
  float v55; // s8
  float v56; // s10
  float v57; // s9
  UnityEngine_Transform_o *v58; // x0
  float v59; // s11
  UIWidget_o *titleNumSprite; // x22
  int v61; // s0
  UnityEngine_Component_o *v65; // x0
  UnityEngine_Transform_o *v66; // x0
  float v67; // s0
  float v68; // s1
  float v69; // s2
  UnityEngine_Component_o *v70; // x0
  float v71; // s8
  float v72; // s10
  float v73; // s9
  UnityEngine_Transform_o *v74; // x0
  UnityEngine_Object_o *v75; // x21
  ShiningIconComponent_o *v76; // x0
  int32_t v77; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  v77 = profileNum;
  if ( (byte_4101915 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_19654, v16);
    byte_4101915 = 1;
  }
  LODWORD(this->fields.baseCollider) = mode;
  if ( !item || !mode || !LOBYTE(this->fields.mainTextList) )
    return;
  LOBYTE(this->fields.mainTextList) = 0;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( profileNum >= 1 && SLODWORD(this->fields.titleName) >= profileNum )
    {
      v20 = this->fields.messageLabel;
      v21 = System_Int32__ToString((int32_t)&v77, 0LL);
      v22 = System_String__Concat_43743732((System_String_o *)StringLiteral_19654, v21, 0LL);
      if ( !v20 )
        goto LABEL_66;
      UISprite__set_spriteName((UISprite_o *)v20, v22, 0LL);
      v23 = this->fields.messageLabel;
      if ( !v23 )
        goto LABEL_66;
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
        v23,
        v23->klass->vtable._34_get_minWidth.methodPtr);
      v18 = (UnityEngine_Behaviour_o *)this->fields.messageLabel;
      if ( !v18 )
        goto LABEL_66;
      v19 = 1;
    }
    else
    {
      v18 = (UnityEngine_Behaviour_o *)this->fields.messageLabel;
      if ( !v18 )
        goto LABEL_66;
      v19 = 0;
    }
    UnityEngine_Behaviour__set_enabled(v18, v19, 0LL);
  }
  newIcon = (UIWidget_o *)this->fields.newIcon;
  if ( !newIcon )
    goto LABEL_66;
  mHeight = newIcon->fields.mHeight;
  v26 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    v26 = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
  }
  UIWidget__set_height(newIcon, v26->static_fields->LABEL_HEIGHT_MAX, 0LL);
  v28 = ServantStatusFlavorTextListViewItemDrawText2__TextLimitAdjust(this, text, v27);
  ServantStatusFlavorTextListViewItemDrawText2__SetTextObjectList(this, v28, v29);
  if ( !LOBYTE(this->fields.addSize.fields.y) )
  {
    ServantStatusFlavorTextListViewItemDrawText2__SetMainObject(this, v30);
    v31 = (UnityEngine_Behaviour_o *)this->fields.newIcon;
    if ( !v31 )
      goto LABEL_66;
    UnityEngine_Behaviour__set_enabled(v31, 0, 0LL);
  }
  v32 = this->fields.newIcon;
  if ( !v32 )
    goto LABEL_66;
  printedSize = UILabel__get_printedSize((UILabel_o *)v32, 0LL);
  v34 = (UIWidget_o *)this->fields.newIcon;
  if ( !v34 )
    goto LABEL_66;
  v35 = printedSize.fields.y + *(float *)&this[1].klass;
  if ( v35 == INFINITY )
    v36 = -v35;
  else
    v36 = v35;
  v37 = (int)v36;
  UIWidget__set_height(v34, (int)v36, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v39 = v37 - mHeight;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v40 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v40 )
      goto LABEL_66;
    *(UnityEngine_Vector3_o *)&v41 = UnityEngine_BoxCollider__get_size(v40, 0LL);
    v44 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v44 )
      goto LABEL_66;
    v45 = v42 + (float)v39;
    UnityEngine_BoxCollider__set_size(v44, *(UnityEngine_Vector3_o *)&v41, 0LL);
  }
  titleBase = (UnityEngine_Object_o *)this->fields.titleBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleBase, 0LL, 0LL) )
  {
    v47 = (UIWidget_o *)this->fields.titleBase;
    if ( !v47 )
      goto LABEL_66;
    UIWidget__set_height(v47, v47->fields.mHeight + v39, 0LL);
  }
  v48 = (UnityEngine_Component_o *)this->fields.newIcon;
  if ( !v48 )
    goto LABEL_66;
  transform = UnityEngine_Component__get_transform(v48, 0LL);
  if ( !transform )
    goto LABEL_66;
  *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v53 = (UnityEngine_Component_o *)this->fields.newIcon;
  v54 = v39 >= 0 ? v39 : v39 + 1;
  if ( !v53 )
    goto LABEL_66;
  v55 = v50;
  v56 = v51;
  v57 = v52;
  v58 = UnityEngine_Component__get_transform(v53, 0LL);
  if ( !v58 )
    goto LABEL_66;
  v59 = (float)(v54 >> 1);
  v78.fields.y = v56 + v59;
  v78.fields.x = v55;
  v78.fields.z = v57;
  UnityEngine_Transform__set_localPosition(v58, v78, 0LL);
  titleNumSprite = (UIWidget_o *)this->fields.titleNumSprite;
  if ( isOpen )
  {
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
    if ( !titleNumSprite )
      goto LABEL_66;
  }
  else
  {
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_gray(0LL);
    if ( !titleNumSprite )
      goto LABEL_66;
  }
  UIWidget__set_color(titleNumSprite, *(UnityEngine_Color_o *)&v61, 0LL);
  v65 = (UnityEngine_Component_o *)this->fields.titleNumSprite;
  if ( !v65
    || (v66 = UnityEngine_Component__get_transform(v65, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v67 = UnityEngine_Transform__get_localPosition(v66, 0LL),
        (v70 = (UnityEngine_Component_o *)this->fields.titleNumSprite) == 0LL)
    || (v71 = v67, v72 = v68, v73 = v69, (v74 = UnityEngine_Component__get_transform(v70, 0LL)) == 0LL) )
  {
LABEL_66:
    sub_B170D4();
  }
  v79.fields.y = v72 + v59;
  v79.fields.x = v71;
  v79.fields.z = v73;
  UnityEngine_Transform__set_localPosition(v74, v79, 0LL);
  v75 = *(UnityEngine_Object_o **)&this->fields.profileNumMax;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
  {
    v76 = *(ShiningIconComponent_o **)&this->fields.profileNumMax;
    if ( !v76 )
      goto LABEL_66;
    ShiningIconComponent__Set_33652660(v76, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetMainObject(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ShiningIconComponent_o *newIcon; // x0
  struct ShiningIconComponent_o *v12; // x9
  struct System_Collections_Generic_List_string__o *rubyTextList; // x8
  int32_t klass; // w21
  int monitor; // w9
  unsigned __int64 v16; // x24
  int v17; // w28
  int32_t v18; // w20
  char v19; // w27
  float v20; // s8
  int v21; // w26
  float v22; // s10
  float v23; // s11
  UnityEngine_Component_o *v24; // x0
  UILabel_o *v25; // x22
  UnityEngine_Transform_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_string__o *v29; // x23
  UILabel_o *v30; // x22
  struct ShiningIconComponent_o *v31; // x8
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x23
  struct System_Collections_Generic_List_UILabel__o *mainList; // x25
  int v34; // w8
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_bool__o *v36; // x27
  UnityEngine_Transform_o *v37; // x0
  struct System_Collections_Generic_List_bool__o *v38; // x28
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x23
  UnityEngine_Transform_o *v40; // x0
  const MethodInfo *v41; // x4
  struct System_Collections_Generic_List_bool__o *v42; // x23
  float v43; // s0
  struct System_Collections_Generic_List_UILabel__o *rubyList; // x0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4101918 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Transform___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UILabel__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_4101918 = 1;
  }
  newIcon = this->fields.newIcon;
  if ( !newIcon
    || ((*(void (__fastcall **)(struct ShiningIconComponent_o *, Il2CppMethodPointer))&newIcon->klass[1]._2.naturalAligment)(
          newIcon,
          newIcon->klass[1].vtable._0_Equals.methodPtr),
        (v12 = this->fields.newIcon) == 0LL)
    || (rubyTextList = this->fields.rubyTextList) == 0LL )
  {
LABEL_50:
    sub_B170D4();
  }
  klass = (int32_t)v12[13].klass;
  monitor = (int)v12[16].monitor;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0.0;
  v21 = -(monitor + klass);
  v22 = (float)((float)monitor + (float)monitor) + 1.0;
  v23 = 0.0;
  while ( (__int64)v16 < rubyTextList->fields._size )
  {
    v24 = (UnityEngine_Component_o *)this->fields.newIcon;
    if ( v24 )
    {
      v25 = *(UILabel_o **)&this->fields.isFirst;
      Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             v24,
                                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          v25,
                                          Component_WebViewObject,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( v27 )
      {
        Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v27,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        v29 = this->fields.rubyTextList;
        if ( v29 )
        {
          v30 = Component_srcLineSprite;
          if ( v16 >= (unsigned int)v29->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( Component_srcLineSprite )
          {
            UILabel__set_text(Component_srcLineSprite, v29->fields._items->m_Items[v16], 0LL);
            UILabel__set_fontSize(v30, klass, 0LL);
            v31 = this->fields.newIcon;
            if ( v31 )
            {
              UIWidget__set_depth((UIWidget_o *)v30, (int32_t)v31[5].monitor, 0LL);
              rubyFlagList = this->fields.rubyFlagList;
              if ( rubyFlagList )
              {
                if ( v16 >= (unsigned int)rubyFlagList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                mainList = this->fields.mainList;
                v34 = *(_DWORD *)&rubyFlagList->fields._items->m_Items[4 * v16 + 4];
                if ( v17 != v34 )
                  v20 = 0.0;
                if ( mainList )
                {
                  if ( v16 >= (unsigned int)mainList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v19 &= v17 == v34;
                  if ( *((_BYTE *)mainList->fields._items->m_Items + v16) )
                  {
                    if ( (v19 & 1) == 0 )
                    {
                      v23 = v22 + v23;
                      *(float *)&this[1].klass = v23;
                    }
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
                    v36 = this->fields.rubyFlagList;
                    if ( !v36 )
                      goto LABEL_50;
                    if ( v16 >= (unsigned int)v36->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    if ( !transform )
                      goto LABEL_50;
                    v45.fields.z = 0.0;
                    v45.fields.y = (float)(*(_DWORD *)&v36->fields._items->m_Items[4 * v16 + 4] * v21) - v23;
                    v45.fields.x = v20;
                    UnityEngine_Transform__set_localPosition(transform, v45, 0LL);
                    v19 = 1;
                  }
                  else
                  {
                    v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
                    v38 = this->fields.rubyFlagList;
                    if ( !v38 )
                      goto LABEL_50;
                    if ( v16 >= (unsigned int)v38->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    if ( !v37 )
                      goto LABEL_50;
                    v46.fields.z = 0.0;
                    v46.fields.y = (float)(*(_DWORD *)&v38->fields._items->m_Items[4 * v16 + 4] * v21) - v23;
                    v46.fields.x = v20;
                    UnityEngine_Transform__set_localPosition(v37, v46, 0LL);
                  }
                  rubyLineList = this->fields.rubyLineList;
                  if ( !rubyLineList )
                    goto LABEL_50;
                  if ( v16 >= (unsigned int)rubyLineList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  if ( rubyLineList->fields._items->m_Items[v16 + 4] )
                  {
                    v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
                    if ( !v40 )
                      goto LABEL_50;
                    localPosition = UnityEngine_Transform__get_localPosition(v40, 0LL);
                    ServantStatusFlavorTextListViewItemDrawText2__SetRubyObject(
                      this,
                      v18++,
                      localPosition,
                      klass,
                      v30,
                      v41);
                  }
                  v42 = this->fields.rubyFlagList;
                  if ( v42 )
                  {
                    if ( v16 >= (unsigned int)v42->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    v17 = *(_DWORD *)&v42->fields._items->m_Items[4 * v16 + 4];
                    LODWORD(v43) = *(_QWORD *)&UILabel__get_printedSize(v30, 0LL);
                    rubyList = this->fields.rubyList;
                    if ( rubyList )
                    {
                      v20 = v20 + v43;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rubyList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UILabel__Add__);
                      rubyTextList = this->fields.rubyTextList;
                      ++v16;
                      if ( rubyTextList )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText2__SetRubyObject(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        int32_t idx,
        UnityEngine_Vector3_o mainPosition,
        int32_t fontSize,
        UILabel_o *mainLabel,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s8
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *newIcon; // x0
  struct UnityEngine_GameObject_o *mainPrefab; // x21
  UnityEngine_Transform_o *Component_WebViewObject; // x24
  UnityEngine_GameObject_o *v23; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v25; // x21
  float v26; // s0
  struct System_Collections_Generic_List_int__o *textPositionYList; // x24
  double v28; // d13
  struct System_String_o *mText; // x8
  int v30; // w26
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v31; // x24
  System_String_o *v32; // x0
  int32_t v33; // w8
  float v34; // s14
  struct System_Collections_Generic_List_int__o *v35; // x23
  struct ShiningIconComponent_o *v36; // x8
  float v37; // s10
  float v38; // s11
  float v39; // s0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x0
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_4101919 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Transform___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UILabel__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__set_Item__, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_23742, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    byte_4101919 = 1;
  }
  newIcon = (UnityEngine_Component_o *)this->fields.newIcon;
  if ( !newIcon )
    goto LABEL_41;
  mainPrefab = this->fields.mainPrefab;
  Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         newIcon,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      (UILabel_o *)mainPrefab,
                                      Component_WebViewObject,
                                      (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  if ( !v23 )
    goto LABEL_41;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v23,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_41;
  v25 = (UILabel_o *)Component_srcLineSprite;
  v26 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  textPositionYList = this->fields.textPositionYList;
  v28 = v26 == INFINITY ? -v26 : v26;
  if ( !textPositionYList )
    goto LABEL_41;
  if ( textPositionYList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( System_String__op_Equality(
         *(System_String_o **)&textPositionYList->fields._items->m_Items[2 * idx + 1],
         (System_String_o *)StringLiteral_1,
         0LL) )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v30 = -1;
      while ( ++v30 < mText->fields.m_stringLength )
      {
        v31 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.textPositionYList;
        if ( v31 )
        {
          if ( v31->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v32 = System_String__Concat_43743732(
                  (System_String_o *)v31->fields._items->m_Items[idx],
                  (System_String_o *)StringLiteral_23742,
                  0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            v31,
            idx,
            (WarBoardManager_TaskList_o *)v32,
            (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_41;
      }
      if ( v25 )
      {
        UILabel__set_fontSize(v25, fontSize, 0LL);
        v34 = 16.0;
        goto LABEL_31;
      }
    }
LABEL_41:
    sub_B170D4();
  }
  if ( !v25 )
    goto LABEL_41;
  if ( fontSize >= 0 )
    v33 = fontSize;
  else
    v33 = fontSize + 1;
  UILabel__set_fontSize(v25, v33 >> 1, 0LL);
  v34 = (float)v25->fields.mFontSize + 1.0;
LABEL_31:
  v35 = this->fields.textPositionYList;
  if ( !v35 )
    goto LABEL_41;
  if ( v35->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  UILabel__set_text(v25, *(System_String_o **)&v35->fields._items->m_Items[2 * idx + 1], 0LL);
  v36 = this->fields.newIcon;
  if ( !v36 )
    goto LABEL_41;
  UIWidget__set_depth((UIWidget_o *)v25, (int32_t)v36[5].monitor, 0LL);
  LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v38) = *(_QWORD *)&UILabel__get_printedSize(v25, 0LL);
  v39 = UILabel__get_printedSize(v25, 0LL).fields.x;
  if ( v39 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v37 - v38) * 0.5);
  else
    UILabel__SetCondensedScale(v25, (int)v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v25, 0LL);
  if ( !transform )
    goto LABEL_41;
  v42.fields.y = y + v34;
  v42.fields.z = 0.0;
  v42.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v42, 0LL);
  v41 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.notRubyFlag;
  if ( !v41 )
    goto LABEL_41;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v41,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UILabel__Add__);
}


System_String_o *__fastcall ServantStatusFlavorTextListViewItemDrawText2__SetTextObjectList(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x23
  System_Char_array *v10; // x0
  __int64 v11; // x2
  System_Char_array *v12; // x1
  int max_length; // w8
  char v14; // w21
  int32_t v15; // w22
  System_String_o *v16; // x26
  System_String_o *v17; // x24
  bool v18; // w27
  int32_t v19; // w25
  bool v20; // w19
  uint16_t Chars; // w0
  struct System_Collections_Generic_List_string__o *v22; // x0
  struct System_Collections_Generic_List_int__o *v23; // x0
  System_Collections_Generic_List_bool__o *v24; // x0
  System_Collections_Generic_List_bool__o *v25; // x0
  struct System_Collections_Generic_List_bool__o *v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  struct System_Collections_Generic_List_string__o *v29; // x0
  System_Collections_Generic_List_bool__o *v30; // x0
  System_Collections_Generic_List_bool__o *v31; // x0
  struct System_Collections_Generic_List_bool__o *v32; // x0
  System_String_o *v33; // x0
  struct System_Collections_Generic_List_string__o *rubyTextList; // x0
  System_Collections_Generic_List_bool__o *rubyLineList; // x0
  System_Collections_Generic_List_bool__o *mainList; // x0
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x0
  struct System_Collections_Generic_List_int__o *textPositionYList; // x0
  System_String_o *v41; // [xsp+8h] [xbp-68h]
  System_Char_array *v42; // [xsp+10h] [xbp-60h]
  __int16 v43[2]; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4101917 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, message);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_4101917 = 1;
  }
  v43[0] = 0;
  v9 = (System_String_o *)StringLiteral_1;
  v10 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v10 )
    goto LABEL_56;
  v12 = v10;
  if ( !v10->max_length )
  {
LABEL_57:
    sub_B17100(v10, v12, v11);
    sub_B170A0();
  }
  v10->m_Items[2] = 10;
  if ( !message || (v41 = message, (v10 = (System_Char_array *)System_String__Split(message, v10, 0LL)) == 0LL) )
LABEL_56:
    sub_B170D4();
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = 0;
    v16 = v9;
    v42 = v10;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        goto LABEL_57;
      v17 = *(System_String_o **)&v10->m_Items[4 * v15 + 2];
      v18 = BYTE4(this[1].klass) != 0;
      if ( !v17 )
        goto LABEL_56;
      if ( v17->fields.m_stringLength >= 1 )
        break;
      v20 = BYTE4(this[1].klass) != 0;
LABEL_45:
      if ( System_String__op_Inequality(v16, (System_String_o *)StringLiteral_1, 0LL) )
      {
        rubyTextList = this->fields.rubyTextList;
        if ( !rubyTextList )
          goto LABEL_56;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rubyTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        rubyLineList = this->fields.rubyLineList;
        if ( !rubyLineList )
          goto LABEL_56;
        System_Collections_Generic_List_bool___Add(
          rubyLineList,
          v18,
          (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
        mainList = (System_Collections_Generic_List_bool__o *)this->fields.mainList;
        if ( !mainList )
          goto LABEL_56;
        System_Collections_Generic_List_bool___Add(
          mainList,
          v20,
          (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
        rubyFlagList = this->fields.rubyFlagList;
        if ( !rubyFlagList )
          goto LABEL_56;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)rubyFlagList,
          v15,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v20 )
        {
          textPositionYList = this->fields.textPositionYList;
          if ( !textPositionYList )
            goto LABEL_56;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)textPositionYList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          v9 = (System_String_o *)StringLiteral_1;
          v16 = (System_String_o *)StringLiteral_1;
        }
        else
        {
          v16 = (System_String_o *)StringLiteral_1;
        }
      }
      v10 = v42;
      ++v15;
      max_length = v42->max_length;
      if ( v15 >= max_length )
        return v41;
    }
    v19 = 1;
    v20 = BYTE4(this[1].klass) != 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v17, v19 - 1, 0LL);
      v43[0] = Chars;
      if ( Chars <= 0x5Au )
        break;
      if ( Chars == 91 )
      {
        if ( System_String__get_Chars(v17, v19, 0LL) != 35 )
        {
          v33 = System_Char__ToString((uint16_t)v43, 0LL);
          v16 = System_String__Concat_43743732(v16, v33, 0LL);
          goto LABEL_42;
        }
        BYTE4(this[1].klass) = 1;
        if ( System_String__op_Inequality(v16, (System_String_o *)StringLiteral_1, 0LL) )
        {
          v29 = this->fields.rubyTextList;
          if ( !v29 )
            goto LABEL_56;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          v30 = this->fields.rubyLineList;
          if ( !v30 )
            goto LABEL_56;
          System_Collections_Generic_List_bool___Add(
            v30,
            v18,
            (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
          v31 = (System_Collections_Generic_List_bool__o *)this->fields.mainList;
          if ( !v31 )
            goto LABEL_56;
          System_Collections_Generic_List_bool___Add(
            v31,
            1,
            (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
          v32 = this->fields.rubyFlagList;
          if ( !v32 )
            goto LABEL_56;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v32,
            v15,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v16 = (System_String_o *)StringLiteral_1;
        }
        LOBYTE(this->fields.addSize.fields.y) = 0;
        v18 = 1;
        goto LABEL_39;
      }
      if ( Chars != 93 )
      {
LABEL_27:
        v27 = System_Char__ToString((uint16_t)v43, 0LL);
        if ( (v14 & 1) != 0 )
        {
          v9 = System_String__Concat_43743732(v9, v27, 0LL);
          v14 = 1;
        }
        else
        {
          v16 = System_String__Concat_43743732(v16, v27, 0LL);
          v14 = 0;
        }
        goto LABEL_42;
      }
      if ( !v20 )
        goto LABEL_30;
      v22 = this->fields.rubyTextList;
      if ( !v22 )
        goto LABEL_56;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      v23 = this->fields.textPositionYList;
      if ( !v23 )
        goto LABEL_56;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      v24 = this->fields.rubyLineList;
      if ( !v24 )
        goto LABEL_56;
      System_Collections_Generic_List_bool___Add(
        v24,
        v18,
        (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
      v25 = (System_Collections_Generic_List_bool__o *)this->fields.mainList;
      if ( !v25 )
        goto LABEL_56;
      System_Collections_Generic_List_bool___Add(
        v25,
        1,
        (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
      v26 = this->fields.rubyFlagList;
      if ( !v26 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v26,
        v15,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      v14 = 0;
      v18 = 0;
      v20 = 0;
      v9 = (System_String_o *)StringLiteral_1;
      BYTE4(this[1].klass) = 0;
      v16 = v9;
LABEL_42:
      if ( v19++ >= v17->fields.m_stringLength )
        goto LABEL_45;
    }
    if ( Chars == 35 )
    {
      if ( v20 )
        goto LABEL_39;
    }
    else
    {
      if ( Chars != 58 )
        goto LABEL_27;
      if ( v20 )
      {
        v14 = 1;
LABEL_39:
        v20 = 1;
        goto LABEL_42;
      }
    }
LABEL_30:
    v28 = System_Char__ToString((uint16_t)v43, 0LL);
    v16 = System_String__Concat_43743732(v16, v28, 0LL);
    v20 = 0;
    goto LABEL_42;
  }
  return v41;
}


System_String_o *__fastcall ServantStatusFlavorTextListViewItemDrawText2__TextFormalAdjust(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t size; // w8
  System_String_o *v8; // x22
  unsigned int v9; // w24
  int32_t v10; // w21
  struct ShiningIconComponent_o *v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  struct ShiningIconComponent_o *v15; // x8
  struct UIWidget_o *v16; // x8
  System_String_o *v17; // x0
  struct ShiningIconComponent_o *newIcon; // x8
  System_String_o *widget; // x0
  int v20; // w26
  uint16_t Chars; // w23
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  struct ShiningIconComponent_o *v24; // x8
  struct UIWidget_o *v25; // x9
  System_String_o *v26; // x0
  int32_t v27; // w8
  unsigned int v28; // w25
  struct ShiningIconComponent_o *v29; // x8
  System_String_o *v30; // x0
  int v31; // w26
  struct ShiningIconComponent_o *v32; // x8
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct ShiningIconComponent_o *v36; // x8
  struct UIWidget_o *v37; // x8
  System_String_o *v38; // x0
  __int16 v40[2]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_410191B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_char__get_Count__, localMainTextList);
    sub_B16FFC(&Method_System_Collections_Generic_List_char__get_Item__, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_410191B = 1;
  }
  v40[0] = 0;
  if ( !localMainTextList )
LABEL_53:
    sub_B170D4();
  size = localMainTextList->fields._size;
  v8 = (System_String_o *)StringLiteral_1;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      newIcon = this->fields.newIcon;
      if ( !newIcon )
        goto LABEL_53;
      widget = (System_String_o *)newIcon[12].fields.widget;
      if ( !widget )
        goto LABEL_53;
      v20 = localMainTextList->fields._items->m_Items[v9 + 2];
      Chars = System_String__get_Chars(widget, v10, 0LL);
      if ( localMainTextList->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v20 == Chars )
      {
        v40[0] = localMainTextList->fields._items->m_Items[v9 + 2];
        v22 = System_Char__ToString((uint16_t)v40, 0LL);
        v23 = System_String__Concat_43743732(v8, v22, 0LL);
        v24 = this->fields.newIcon;
        if ( !v24 )
          goto LABEL_53;
        v25 = v24[12].fields.widget;
        if ( !v25 )
          goto LABEL_53;
        v8 = v23;
        if ( v10 < v25->fields.m_CachedPtr - 1 )
          ++v10;
      }
      else
      {
        if ( localMainTextList->fields._items->m_Items[v9 + 2] != 10 )
        {
          if ( localMainTextList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v40[0] = localMainTextList->fields._items->m_Items[v9 + 2];
          v38 = System_Char__ToString((uint16_t)v40, 0LL);
          v8 = System_String__Concat_43743732(v8, v38, 0LL);
          goto LABEL_51;
        }
        v24 = this->fields.newIcon;
        if ( !v24 )
          goto LABEL_53;
      }
      v26 = (System_String_o *)v24[12].fields.widget;
      if ( !v26 )
        goto LABEL_53;
      if ( System_String__get_Chars(v26, v10, 0LL) == 10 )
      {
        v27 = localMainTextList->fields._size;
        v28 = v9 + 1;
        if ( (int)(v9 + 1) >= v27 )
          goto LABEL_41;
        if ( v27 <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v29 = this->fields.newIcon;
        if ( !v29 )
          goto LABEL_53;
        v30 = (System_String_o *)v29[12].fields.widget;
        if ( !v30 )
          goto LABEL_53;
        v31 = localMainTextList->fields._items->m_Items[v28 + 2];
        if ( v31 == System_String__get_Chars(v30, v10 + 1, 0LL) )
        {
LABEL_41:
          v32 = this->fields.newIcon;
          if ( !v32 )
            goto LABEL_53;
          v33 = (System_String_o *)v32[12].fields.widget;
          if ( !v33 )
            goto LABEL_53;
          v40[0] = System_String__get_Chars(v33, v10, 0LL);
          v34 = System_Char__ToString((uint16_t)v40, 0LL);
          v35 = System_String__Concat_43743732(v8, v34, 0LL);
          v36 = this->fields.newIcon;
          if ( !v36 )
            goto LABEL_53;
          v37 = v36[12].fields.widget;
          if ( !v37 )
            goto LABEL_53;
          v8 = v35;
          if ( v10 < v37->fields.m_CachedPtr - 1 )
            ++v10;
        }
        else
        {
          if ( localMainTextList->fields._size <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( localMainTextList->fields._items->m_Items[v28 + 2] == 10 )
          {
            v11 = this->fields.newIcon;
            if ( !v11 )
              goto LABEL_53;
            v12 = (System_String_o *)v11[12].fields.widget;
            if ( !v12 )
              goto LABEL_53;
            v40[0] = System_String__get_Chars(v12, v10, 0LL);
            v13 = System_Char__ToString((uint16_t)v40, 0LL);
            v14 = System_String__Concat_43743732(v8, v13, 0LL);
            v15 = this->fields.newIcon;
            if ( !v15 )
              goto LABEL_53;
            v16 = v15[12].fields.widget;
            if ( !v16 )
              goto LABEL_53;
            v8 = v14;
            if ( v10 < v16->fields.m_CachedPtr - 1 )
              ++v10;
          }
          else
          {
            if ( localMainTextList->fields._size <= v28 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v40[0] = localMainTextList->fields._items->m_Items[v28 + 2];
            v17 = System_Char__ToString((uint16_t)v40, 0LL);
            v8 = System_String__Concat_43743732(v8, v17, 0LL);
            ++v9;
          }
        }
      }
LABEL_51:
      size = localMainTextList->fields._size;
      ++v9;
    }
    while ( (int)v9 < size );
  }
  return v8;
}


System_String_o *__fastcall ServantStatusFlavorTextListViewItemDrawText2__TextLimitAdjust(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x22
  System_Collections_Generic_List_char__o *v14; // x21
  int32_t v15; // w23
  char v16; // w28
  char v17; // w19
  char v18; // w26
  System_String_o *v19; // x24
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  uint16_t Chars; // w0
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  struct ShiningIconComponent_o *newIcon; // x8
  ServantStatusFlavorTextListViewItemDrawText2_o *v29; // [xsp+0h] [xbp-60h]
  __int16 v30[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_410191A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_char__Add__, labelText);
    sub_B16FFC(&Method_System_Collections_Generic_List_char___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_char__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15574, v9);
    sub_B16FFC(&StringLiteral_1223, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_15807, v12);
    byte_410191A = 1;
  }
  v30[0] = 0;
  v13 = (System_String_o *)StringLiteral_1;
  v14 = (System_Collections_Generic_List_char__o *)sub_B170CC(
                                                     System_Collections_Generic_List_char__TypeInfo,
                                                     labelText,
                                                     method,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_char____ctor(
    v14,
    (const MethodInfo_2EB4D8C *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_33;
  v29 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = v13;
    while ( 1 )
    {
      v30[0] = System_String__get_Chars(labelText, v15, 0LL);
      v20 = System_Char__ToString((uint16_t)v30, 0LL);
      v13 = System_String__Concat_43743732(v13, v20, 0LL);
      if ( (v17 & 1) != 0 )
      {
        v30[0] = System_String__get_Chars(labelText, v15, 0LL);
        v21 = System_Char__ToString((uint16_t)v30, 0LL);
        v19 = System_String__Concat_43743732(v19, v21, 0LL);
      }
      Chars = System_String__get_Chars(labelText, v15, 0LL);
      if ( !v14 )
        goto LABEL_33;
      System_Collections_Generic_List_char___Add(
        v14,
        Chars,
        (const MethodInfo_2EB5AE8 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v15, 0LL) == 91
        && System_String__get_Chars(labelText, v15 + 1, 0LL) == 35 )
      {
        v18 = 0;
      }
      else
      {
        if ( System_String__get_Chars(labelText, v15, 0LL) != 35 || (v16 & 1) == 0 )
        {
          if ( ((unsigned __int8)v16 & (System_String__get_Chars(labelText, v15, 0LL) == 58)) != 0 )
          {
            v16 = 1;
            v17 = 1;
          }
          else if ( System_String__get_Chars(labelText, v15, 0LL) == 93 && (v16 & 1) != 0 )
          {
            if ( (v17 & 1) != 0 )
            {
              v23 = System_String__Concat_43743732((System_String_o *)StringLiteral_1223, v19, 0LL);
              if ( !v13 )
                goto LABEL_33;
              v24 = v23;
            }
            else
            {
              if ( !v13 )
                goto LABEL_33;
              v24 = (System_String_o *)StringLiteral_15807;
            }
            v25 = System_String__Replace_43750968(v13, v24, (System_String_o *)StringLiteral_1, 0LL);
            v19 = (System_String_o *)StringLiteral_1;
            v13 = v25;
            v16 = 0;
            v17 = 0;
          }
          goto LABEL_25;
        }
        if ( !v13 )
          goto LABEL_33;
        v13 = System_String__Replace_43750968(
                v13,
                (System_String_o *)StringLiteral_15574,
                (System_String_o *)StringLiteral_1,
                0LL);
      }
      v16 = 1;
LABEL_25:
      if ( ++v15 >= labelText->fields.m_stringLength )
        goto LABEL_28;
    }
  }
  v18 = 1;
LABEL_28:
  WrapControlText__textAdjust((UILabel_o *)v29->fields.newIcon, v13, 22, 0, 0, 0LL);
  if ( (v18 & 1) != 0 )
  {
    newIcon = v29->fields.newIcon;
    if ( newIcon )
      return (System_String_o *)newIcon[12].fields.widget;
LABEL_33:
    sub_B170D4();
  }
  return ServantStatusFlavorTextListViewItemDrawText2__TextFormalAdjust(v29, v14, v26);
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelFontSize(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct ShiningIconComponent_o *newIcon; // x8

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_B170D4();
  return (int32_t)newIcon[13].klass;
}


float __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelHeight(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  struct ShiningIconComponent_o *newIcon; // x8

  newIcon = this->fields.newIcon;
  if ( !newIcon )
    sub_B170D4();
  return (float)SHIDWORD(newIcon[5].klass);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
        ServantStatusFlavorTextListViewItemDrawText2_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *newIcon; // x0
  UnityEngine_Transform_o *transform; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  newIcon = (UnityEngine_Component_o *)this->fields.newIcon;
  if ( !newIcon || (transform = UnityEngine_Component__get_transform(newIcon, 0LL)) == 0LL )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}