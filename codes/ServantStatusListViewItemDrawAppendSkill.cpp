void ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4C23FB3 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4C23FB3 = 1;
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

  if ( (byte_4C23FB2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C23FB2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5);
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
  if ( (byte_4C23FB0 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1C2D490(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4C23FB0 = 1;
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
    sub_1C2D6EC(this, method);
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
  __int64 v14; // x2
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x20
  int v17; // w29
  __int64 v18; // x21
  int32_t v19; // w22
  unsigned __int64 max_length_low; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_Transform_o *transform; // x24
  ServantStatusSkillComponent_o *v24; // x24
  int32_t Height; // w0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  ServantStatusListViewItemDrawAppendSkill_c *v28; // x8
  int32_t v29; // w24
  int32_t v30; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v32; // w24
  int32_t v33; // w26
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v41; // x8
  int v42; // w20
  int v43; // w24
  int v44; // w21
  int v45; // w8
  __int64 v46; // x9
  __int64 v47; // x10
  int32_t *m_Items; // x8
  char v49; // w26
  char v50; // w21
  int v51; // t1
  struct UserServantEntity_o *v52; // x8
  __int64 v53; // x22
  __int64 v54; // x23
  int32_t v55; // w0
  char v56; // w22
  char v57; // w21
  int v58; // w8
  int v59; // w20
  int v60; // w8
  int v61; // w8
  float v62; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v67; // s8
  int32_t v68; // w1
  int32_t v69; // w1
  int v70; // w20
  float v71; // s8
  float v72; // s11
  float v73; // s9
  float v74; // s10
  float v75; // s8
  float v76; // s9
  int32_t v77; // w20
  float v78; // s10
  UnityEngine_GameObject_o *v79; // x22
  Il2CppObject *Component_object; // x21
  int32_t v81; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v82; // x8
  int32_t v83; // w21
  int v84; // w8
  int *v85; // t2
  int v86; // w9
  ServantStatusListViewItem_o *v87; // [xsp+8h] [xbp-B8h]
  char v88; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23FB1 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    sub_1C2D490(&StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C2D490(&StringLiteral_20635/*"img_txt_extraskill_title"*/);
    byte_4C23FB1 = 1;
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
            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v10, 0);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v8,
        0,
        (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
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
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20635/*"img_txt_extraskill_title"*/, 0);
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
    v15 = idList;
    if ( !idList )
      return;
    v87 = item;
    v88 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0x100000000LL;
    v19 = 1;
    while ( 1 )
    {
      max_length_low = LODWORD(v15->max_length);
      if ( (__int64)v16 >= (int)max_length_low )
        break;
      if ( v16 >= max_length_low )
        goto LABEL_149;
      if ( v15->m_Items[v16] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v22 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_71186964(transform, (UnityEngine_Transform_o *)skillList, 0, 0);
        if ( !byte_4C20DA6 )
        {
          sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v22,
                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v16 >= LODWORD(idList->max_length) )
          goto LABEL_149;
        if ( !titleList )
          goto LABEL_10;
        if ( v16 >= LODWORD(titleList->max_length) )
          goto LABEL_149;
        if ( !explanationList )
          goto LABEL_10;
        if ( v16 >= LODWORD(explanationList->max_length) )
          goto LABEL_149;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v16 >= LODWORD(releaseStateList->max_length) )
          goto LABEL_149;
        if ( !lvList )
          goto LABEL_10;
        if ( v16 >= LODWORD(lvList->max_length) )
          goto LABEL_149;
        v24 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v19,
          idList->m_Items[v16],
          titleList->m_Items[v16],
          explanationList->m_Items[v16],
          releaseStateList->m_Items[v16],
          lvList->m_Items[v16],
          0);
        Height = ServantStatusSkillComponent__GetHeight(v24, 0);
        v28 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v29 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v28 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v28->static_fields->SKILL_BASE_HEIGHT;
        v30 = *p_SKILL_BASE_HEIGHT;
        v32 = p_SKILL_BASE_HEIGHT[1] + v29;
        v33 = v32 <= *p_SKILL_BASE_HEIGHT ? v30 : v32;
        if ( !skillList )
          goto LABEL_10;
        v34 = *((_QWORD *)skillList + 2);
        v35 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v34 )
          goto LABEL_10;
        v36 = *((int *)skillList + 6);
        if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v22,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * v36;
          *((_DWORD *)skillList + 6) = v36 + 1;
          *(_QWORD *)(v37 + 32) = v22;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 32), (int32_t)v22, v26, v27);
        }
        if ( !idList )
          goto LABEL_10;
        max_length = idList->max_length;
        v17 += v33;
        ++v19;
        if ( v16 == (_DWORD)max_length - 1 )
          goto LABEL_57;
        if ( v16 + 1 >= (unsigned int)max_length )
          goto LABEL_149;
        if ( *(int *)((char *)idList->m_Items + (v18 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v32 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v88 |= v32 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v15 = idList;
      ++v16;
      v18 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v87->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v87->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
        {
          skillList = v87->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v41 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v42 = lvList->max_length;
            if ( v42 < 1 )
            {
              v43 = 0;
            }
            else
            {
              v43 = 0;
              while ( 1 )
              {
                if ( v42 == v43 )
                  goto LABEL_149;
                if ( lvList->m_Items[v43] <= 9u )
                  break;
                if ( v42 == ++v43 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v88 & 1) != 0 )
                v44 = 62;
              else
                v44 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v17 += v44;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v87->fields._CanMoveCombine_k__BackingField, 0);
              v45 = v17 >= 0 ? v17 : v17 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v45 >> 1), 0);
              v41 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v46 = LODWORD(v41->max_length);
            if ( v46 << 32 >= 1 )
            {
              v47 = (int)v46;
              m_Items = v41->m_Items;
              v49 = 1;
              v50 = 1;
              while ( v46 )
              {
                v51 = *m_Items++;
                --v47;
                --v46;
                v50 &= v51 > 9;
                v49 &= v51 < 1;
                if ( !v47 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1C2D6F4(skillList, item, v14);
            }
            v50 = 1;
            v49 = 1;
LABEL_93:
            v52 = v87->fields.userSvtEntity;
            if ( !v52 )
LABEL_10:
              sub_1C2D6EC(skillList, item);
            v54 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
            v53 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v94.fields.currentCryptoKey = v54;
            *(_QWORD *)&v94.fields.fakeValue = v53;
            v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v94, 0);
            v56 = v50 | v49 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v55, 0);
            if ( (v56 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0);
              v57 = v43 < v42;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v88 & 1) != 0 )
                v58 = 62;
              else
                v58 = 50;
              if ( v43 >= v42 )
                v59 = v58;
              else
                v59 = 0;
              if ( !skillList )
                goto LABEL_10;
              v57 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v17 += v59;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v87->fields._CanMoveCombine_k__BackingField, 0);
              if ( v17 >= 0 )
                v60 = v17;
              else
                v60 = v17 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v60 >> 1), 0);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v57, 0);
            if ( v17 >= 0 )
              v61 = v17;
            else
              v61 = v17 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v61 >> 1), 0);
            v62 = -120.0;
            if ( (v56 & 1) != 0 )
              v62 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v62, 0);
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
    v67 = y + (float)v17;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v95.fields.x = x;
      v95.fields.y = v67;
      v95.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v95, 0);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v68 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v68, 0);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v69 = v67 == INFINITY ? 0x80000000 : (int)v67;
        UIWidget__set_height((UIWidget_o *)skillList, v69, 0);
        skillList = this->fields.titleSprite;
        v70 = v17 >= 0 ? v17 : v17 + 1;
        if ( skillList )
        {
          v71 = this->fields.titleBasePosition.fields.x;
          v72 = this->fields.titleBasePosition.fields.y;
          v73 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0);
          if ( skillList )
          {
            v74 = (float)(v70 >> 1);
            v96.fields.y = v72 + v74;
            v96.fields.x = v71;
            v96.fields.z = v73;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v96, 0);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v75 = this->fields.skillBasePosition.fields.z;
              v76 = this->fields.skillBasePosition.fields.x;
              v77 = 0;
              v78 = this->fields.skillBasePosition.fields.y + v74;
              while ( v77 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v77,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v79 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v79, 0);
                  if ( skillList )
                  {
                    v97.fields.x = v76;
                    v97.fields.y = v78;
                    v97.fields.z = v75;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v97, 0);
                    if ( Component_object )
                    {
                      v81 = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)Component_object, 0);
                      v82 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v83 = v81;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v82 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v77;
                      v85 = &v82->static_fields->SKILL_BASE_HEIGHT;
                      v84 = *v85;
                      v86 = v85[1] + v83;
                      if ( v86 > *v85 )
                        v84 = v86;
                      v78 = v78 - (float)v84;
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