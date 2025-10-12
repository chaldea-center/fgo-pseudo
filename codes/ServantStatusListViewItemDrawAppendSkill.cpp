void ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4C345CC & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4C345CC = 1;
  }
  static_fields = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields;
  static_fields->SKILL_BASE_POS_Y = -25.0;
  *(_QWORD *)&static_fields->SKILL_BASE_HEIGHT = 0x2800000069LL;
}


void ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C345CB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C345CB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawAppendSkill_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  int32x2_t v4; // d0
  ServantStatusListViewItemDrawAppendSkill_c *v5; // x0
  float SKILL_BASE_POS_Y; // s0

  v2 = this;
  if ( (byte_4C345C9 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1C32C20(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4C345C9 = 1;
  }
  baseSprite = v2->fields.baseSprite;
  if ( !baseSprite
    || (v4.n64_u64[0] = *(unsigned __int64 *)&baseSprite->fields.mWidth,
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v2->fields.titleSprite,
        v2->fields.baseSize.fields.z = 0.0,
        *(float32x2_t *)&v2->fields.baseSize.fields.x = vcvt_f32_s32(v4),
        !this)
    || (this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  v2->fields.titleBasePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v5 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    v5 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v5->static_fields->SKILL_BASE_POS_Y;
  v2->fields.skillBasePosition.fields.x = 0.0;
  v2->fields.skillBasePosition.fields.z = 0.0;
  v2->fields.skillBasePosition.fields.y = SKILL_BASE_POS_Y;
}


int32_t ServantStatusListViewItemDrawAppendSkill__GetKind(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  return 6;
}


void ServantStatusListViewItemDrawAppendSkill__SetItem(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  void *skillList; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  Il2CppObject *v10; // x23
  int v11; // w8
  UILabel_o *explanationLabel; // x21
  UISprite_o *titleTextSprite; // x21
  System_Int32_array *v14; // x8
  unsigned __int64 v15; // x20
  int v16; // w29
  __int64 v17; // x21
  int32_t v18; // w22
  unsigned __int64 max_length_low; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v21; // x23
  UnityEngine_Transform_o *transform; // x24
  ServantStatusSkillComponent_o *v23; // x24
  int32_t Height; // w0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ServantStatusListViewItemDrawAppendSkill_c *v27; // x8
  int32_t v28; // w24
  int32_t v29; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v31; // w24
  int32_t v32; // w26
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v40; // x8
  int v41; // w20
  int v42; // w24
  int v43; // w21
  int v44; // w8
  __int64 v45; // x9
  __int64 v46; // x10
  int32_t *m_Items; // x8
  char v48; // w26
  char v49; // w21
  int v50; // t1
  struct UserServantEntity_o *v51; // x8
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t v54; // w0
  char v55; // w22
  char v56; // w21
  int v57; // w8
  int v58; // w20
  int v59; // w8
  int v60; // w8
  float v61; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v66; // s8
  int32_t v67; // w1
  int32_t v68; // w1
  int v69; // w20
  float v70; // s8
  float v71; // s11
  float v72; // s9
  float v73; // s10
  float v74; // s8
  float v75; // s9
  int32_t v76; // w20
  float v77; // s10
  UnityEngine_GameObject_o *v78; // x22
  Il2CppObject *Component_object; // x21
  int32_t v80; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v81; // x8
  int32_t v82; // w21
  int v83; // w8
  int *v84; // t2
  int v85; // w9
  ServantStatusListViewItem_o *v86; // [xsp+8h] [xbp-B8h]
  char v87; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C345CA & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    sub_1C32C20(&StringLiteral_11933/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C32C20(&StringLiteral_20647/*"img_txt_extraskill_title"*/);
    byte_4C345CA = 1;
  }
  titleList = 0;
  idList = 0;
  releaseStateList = 0;
  explanationList = 0;
  lvList = 0;
  skillList = this->fields.skillList;
  if ( !skillList )
    goto LABEL_10;
  v8 = 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)skillList + 6);
    if ( v8 >= v9 )
      break;
    v10 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)skillList,
            v8,
            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)v10, 0);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v8,
        0,
        (const MethodInfo_3798540 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      skillList = this->fields.skillList;
      ++v8;
      if ( skillList )
        continue;
    }
    goto LABEL_10;
  }
  v11 = *((_DWORD *)skillList + 7) + 1;
  *((_DWORD *)skillList + 6) = 0;
  *((_DWORD *)skillList + 7) = v11;
  if ( v9 >= 1 )
    System_Array__Clear(*((System_Array_o **)skillList + 2), 0, v9, 0);
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11933/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20647/*"img_txt_extraskill_title"*/, 0);
    skillList = this->fields.titleTextSprite;
    if ( !skillList )
      goto LABEL_10;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)skillList + 840LL))(
      skillList,
      *(_QWORD *)(*(_QWORD *)skillList + 848LL));
    ServantStatusListViewItem__GetAppendPassiveSkillInfo(
      item,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      0);
    v14 = idList;
    if ( !idList )
      return;
    v86 = item;
    v87 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0x100000000LL;
    v18 = 1;
    while ( 1 )
    {
      max_length_low = LODWORD(v14->max_length);
      if ( (__int64)v15 >= (int)max_length_low )
        break;
      if ( v15 >= max_length_low )
        goto LABEL_149;
      if ( v14->m_Items[v15] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v21 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_71246900(transform, (UnityEngine_Transform_o *)skillList, 0, 0);
        if ( !byte_4C313D6 )
        {
          sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v21,
                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v15 >= LODWORD(idList->max_length) )
          goto LABEL_149;
        if ( !titleList )
          goto LABEL_10;
        if ( v15 >= LODWORD(titleList->max_length) )
          goto LABEL_149;
        if ( !explanationList )
          goto LABEL_10;
        if ( v15 >= LODWORD(explanationList->max_length) )
          goto LABEL_149;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v15 >= LODWORD(releaseStateList->max_length) )
          goto LABEL_149;
        if ( !lvList )
          goto LABEL_10;
        if ( v15 >= LODWORD(lvList->max_length) )
          goto LABEL_149;
        v23 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v18,
          idList->m_Items[v15],
          titleList->m_Items[v15],
          explanationList->m_Items[v15],
          releaseStateList->m_Items[v15],
          lvList->m_Items[v15],
          0);
        Height = ServantStatusSkillComponent__GetHeight(v23, 0);
        v27 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v28 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v27 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v27->static_fields->SKILL_BASE_HEIGHT;
        v29 = *p_SKILL_BASE_HEIGHT;
        v31 = p_SKILL_BASE_HEIGHT[1] + v28;
        v32 = v31 <= *p_SKILL_BASE_HEIGHT ? v29 : v31;
        if ( !skillList )
          goto LABEL_10;
        v33 = *((_QWORD *)skillList + 2);
        v34 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v33 )
          goto LABEL_10;
        v35 = *((int *)skillList + 6);
        if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v21,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * v35;
          *((_DWORD *)skillList + 6) = v35 + 1;
          *(_QWORD *)(v36 + 32) = v21;
          sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 32), (int32_t)v21, v25, v26);
        }
        if ( !idList )
          goto LABEL_10;
        max_length = idList->max_length;
        v16 += v32;
        ++v18;
        if ( v15 == (_DWORD)max_length - 1 )
          goto LABEL_57;
        if ( v15 + 1 >= (unsigned int)max_length )
          goto LABEL_149;
        if ( *(int *)((char *)idList->m_Items + (v17 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v31 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v87 |= v31 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v14 = idList;
      ++v15;
      v17 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v86->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v86->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
        {
          skillList = v86->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v40 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v41 = lvList->max_length;
            if ( v41 < 1 )
            {
              v42 = 0;
            }
            else
            {
              v42 = 0;
              while ( 1 )
              {
                if ( v41 == v42 )
                  goto LABEL_149;
                if ( lvList->m_Items[v42] <= 9u )
                  break;
                if ( v41 == ++v42 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v87 & 1) != 0 )
                v43 = 62;
              else
                v43 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v16 += v43;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v86->fields._CanMoveCombine_k__BackingField, 0);
              v44 = v16 >= 0 ? v16 : v16 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v44 >> 1), 0);
              v40 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v45 = LODWORD(v40->max_length);
            if ( v45 << 32 >= 1 )
            {
              v46 = (int)v45;
              m_Items = v40->m_Items;
              v48 = 1;
              v49 = 1;
              while ( v45 )
              {
                v50 = *m_Items++;
                --v46;
                --v45;
                v49 &= v50 > 9;
                v48 &= v50 < 1;
                if ( !v46 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1C32E84(skillList);
            }
            v49 = 1;
            v48 = 1;
LABEL_93:
            v51 = v86->fields.userSvtEntity;
            if ( !v51 )
LABEL_10:
              sub_1C32E7C(skillList);
            v53 = *(_QWORD *)&v51->fields.svtId.fields.currentCryptoKey;
            v52 = *(_QWORD *)&v51->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v93.fields.currentCryptoKey = v53;
            *(_QWORD *)&v93.fields.fakeValue = v52;
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v93, 0);
            v55 = v49 | v48 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v54, 0);
            if ( (v55 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0);
              v56 = v42 < v41;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v87 & 1) != 0 )
                v57 = 62;
              else
                v57 = 50;
              if ( v42 >= v41 )
                v58 = v57;
              else
                v58 = 0;
              if ( !skillList )
                goto LABEL_10;
              v56 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v16 += v58;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v86->fields._CanMoveCombine_k__BackingField, 0);
              if ( v16 >= 0 )
                v59 = v16;
              else
                v59 = v16 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v59 >> 1), 0);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v56, 0);
            if ( v16 >= 0 )
              v60 = v16;
            else
              v60 = v16 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v60 >> 1), 0);
            v61 = -120.0;
            if ( (v55 & 1) != 0 )
              v61 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v61, 0);
          }
        }
      }
    }
    x = this->fields.baseSize.fields.x;
    y = this->fields.baseSize.fields.y;
    z = this->fields.baseSize.fields.z;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v66 = y + (float)v16;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v94.fields.x = x;
      v94.fields.y = v66;
      v94.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v94, 0);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v67 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v67, 0);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v68 = v66 == INFINITY ? 0x80000000 : (int)v66;
        UIWidget__set_height((UIWidget_o *)skillList, v68, 0);
        skillList = this->fields.titleSprite;
        v69 = v16 >= 0 ? v16 : v16 + 1;
        if ( skillList )
        {
          v70 = this->fields.titleBasePosition.fields.x;
          v71 = this->fields.titleBasePosition.fields.y;
          v72 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0);
          if ( skillList )
          {
            v73 = (float)(v69 >> 1);
            v95.fields.y = v71 + v73;
            v95.fields.x = v70;
            v95.fields.z = v72;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v95, 0);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v74 = this->fields.skillBasePosition.fields.z;
              v75 = this->fields.skillBasePosition.fields.x;
              v76 = 0;
              v77 = this->fields.skillBasePosition.fields.y + v73;
              while ( v76 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v76,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v78 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v78, 0);
                  if ( skillList )
                  {
                    v96.fields.x = v75;
                    v96.fields.y = v77;
                    v96.fields.z = v74;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v96, 0);
                    if ( Component_object )
                    {
                      v80 = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)Component_object, 0);
                      v81 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v82 = v80;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v81 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v76;
                      v84 = &v81->static_fields->SKILL_BASE_HEIGHT;
                      v83 = *v84;
                      v85 = v84[1] + v82;
                      if ( v85 > *v84 )
                        v83 = v85;
                      v77 = v77 - (float)v83;
                      if ( skillList )
                        continue;
                    }
                  }
                }
                goto LABEL_10;
              }
              return;
            }
          }
        }
      }
    }
    goto LABEL_10;
  }
}