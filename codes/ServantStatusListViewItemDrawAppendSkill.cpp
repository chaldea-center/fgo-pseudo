void ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4D2DB59 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4D2DB59 = 1;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2DB58 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2DB58 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4D2DB56 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1C93AD4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_4D2DB56 = 1;
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
    sub_1C93D2C(this, method);
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  ServantStatusListViewItemDrawAppendSkill_c *v31; // x8
  int32_t v32; // w24
  int32_t v33; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v35; // w24
  int32_t v36; // w26
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v44; // x8
  int v45; // w20
  int v46; // w24
  int v47; // w21
  int v48; // w8
  __int64 v49; // x9
  __int64 v50; // x10
  int32_t *m_Items; // x8
  char v52; // w26
  char v53; // w21
  int v54; // t1
  struct UserServantEntity_o *v55; // x8
  __int64 v56; // x22
  __int64 v57; // x23
  int32_t v58; // w0
  char v59; // w22
  char v60; // w21
  int v61; // w8
  int v62; // w20
  int v63; // w8
  int v64; // w8
  float v65; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v70; // s8
  int32_t v71; // w1
  int32_t v72; // w1
  int v73; // w20
  float v74; // s8
  float v75; // s11
  float v76; // s9
  float v77; // s10
  float v78; // s8
  float v79; // s9
  int32_t v80; // w20
  float v81; // s10
  UnityEngine_GameObject_o *v82; // x22
  Il2CppObject *Component_object; // x21
  int32_t v84; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v85; // x8
  int32_t v86; // w21
  int v87; // w8
  int *v88; // t2
  int v89; // w9
  ServantStatusListViewItem_o *v90; // [xsp+8h] [xbp-B8h]
  char v91; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2DB57 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    sub_1C93AD4(&StringLiteral_12021/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_1C93AD4(&StringLiteral_20883/*"img_txt_extraskill_title"*/);
    byte_4D2DB57 = 1;
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
            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v10, 0);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v8,
        0,
        (const MethodInfo_3879720 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
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
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20883/*"img_txt_extraskill_title"*/, 0);
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
    v90 = item;
    v91 = 0;
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
                      (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v21 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_72143348(transform, (UnityEngine_Transform_o *)skillList, 0, 0);
        if ( !byte_4D2A13E )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        GameObjectExtensions__SetLocalScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v21,
                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
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
        v31 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v32 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v31 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v31->static_fields->SKILL_BASE_HEIGHT;
        v33 = *p_SKILL_BASE_HEIGHT;
        v35 = p_SKILL_BASE_HEIGHT[1] + v32;
        v36 = v35 <= *p_SKILL_BASE_HEIGHT ? v33 : v35;
        if ( !skillList )
          goto LABEL_10;
        v37 = *((_QWORD *)skillList + 2);
        v38 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v37 )
          goto LABEL_10;
        v39 = *((int *)skillList + 6);
        if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v21,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = v37 + 8 * v39;
          *((_DWORD *)skillList + 6) = v39 + 1;
          *(_QWORD *)(v40 + 32) = v21;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 32), (int32_t)v21, v25, v26, v27, v28, v29, v30);
        }
        if ( !idList )
          goto LABEL_10;
        max_length = idList->max_length;
        v16 += v36;
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
          if ( v35 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v91 |= v35 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v14 = idList;
      ++v15;
      v17 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v90->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v90->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
        {
          skillList = v90->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v44 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v45 = lvList->max_length;
            if ( v45 < 1 )
            {
              v46 = 0;
            }
            else
            {
              v46 = 0;
              while ( 1 )
              {
                if ( v45 == v46 )
                  goto LABEL_149;
                if ( lvList->m_Items[v46] <= 9u )
                  break;
                if ( v45 == ++v46 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v91 & 1) != 0 )
                v47 = 62;
              else
                v47 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v16 += v47;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v90->fields._CanMoveCombine_k__BackingField, 0);
              v48 = v16 >= 0 ? v16 : v16 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v48 >> 1), 0);
              v44 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v49 = LODWORD(v44->max_length);
            if ( v49 << 32 >= 1 )
            {
              v50 = (int)v49;
              m_Items = v44->m_Items;
              v52 = 1;
              v53 = 1;
              while ( v49 )
              {
                v54 = *m_Items++;
                --v50;
                --v49;
                v53 &= v54 > 9;
                v52 &= v54 < 1;
                if ( !v50 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1C93D34(skillList);
            }
            v53 = 1;
            v52 = 1;
LABEL_93:
            v55 = v90->fields.userSvtEntity;
            if ( !v55 )
LABEL_10:
              sub_1C93D2C(skillList, item);
            v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
            v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v97.fields.currentCryptoKey = v57;
            *(_QWORD *)&v97.fields.fakeValue = v56;
            v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v97, 0);
            v59 = v53 | v52 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v58, 0);
            if ( (v59 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0);
              v60 = v46 < v45;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v91 & 1) != 0 )
                v61 = 62;
              else
                v61 = 50;
              if ( v46 >= v45 )
                v62 = v61;
              else
                v62 = 0;
              if ( !skillList )
                goto LABEL_10;
              v60 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v16 += v62;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v90->fields._CanMoveCombine_k__BackingField, 0);
              if ( v16 >= 0 )
                v63 = v16;
              else
                v63 = v16 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v63 >> 1), 0);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v60, 0);
            if ( v16 >= 0 )
              v64 = v16;
            else
              v64 = v16 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v64 >> 1), 0);
            v65 = -120.0;
            if ( (v59 & 1) != 0 )
              v65 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v65, 0);
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
    v70 = y + (float)v16;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v98.fields.x = x;
      v98.fields.y = v70;
      v98.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v98, 0);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v71 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v71, 0);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v72 = v70 == INFINITY ? 0x80000000 : (int)v70;
        UIWidget__set_height((UIWidget_o *)skillList, v72, 0);
        skillList = this->fields.titleSprite;
        v73 = v16 >= 0 ? v16 : v16 + 1;
        if ( skillList )
        {
          v74 = this->fields.titleBasePosition.fields.x;
          v75 = this->fields.titleBasePosition.fields.y;
          v76 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0);
          if ( skillList )
          {
            v77 = (float)(v73 >> 1);
            v99.fields.y = v75 + v77;
            v99.fields.x = v74;
            v99.fields.z = v76;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v99, 0);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v78 = this->fields.skillBasePosition.fields.z;
              v79 = this->fields.skillBasePosition.fields.x;
              v80 = 0;
              v81 = this->fields.skillBasePosition.fields.y + v77;
              while ( v80 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v80,
                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v82 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v82, 0);
                  if ( skillList )
                  {
                    v100.fields.x = v79;
                    v100.fields.y = v81;
                    v100.fields.z = v78;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v100, 0);
                    if ( Component_object )
                    {
                      v84 = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)Component_object, 0);
                      v85 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v86 = v84;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v85 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v80;
                      v88 = &v85->static_fields->SKILL_BASE_HEIGHT;
                      v87 = *v88;
                      v89 = v88[1] + v86;
                      if ( v89 > *v88 )
                        v87 = v89;
                      v81 = v81 - (float)v87;
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