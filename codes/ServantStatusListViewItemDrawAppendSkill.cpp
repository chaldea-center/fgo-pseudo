void ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_5935142 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_5935142 = 1;
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935141 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5935141 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawAppendSkill_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  int32x2_t v4; // d0
  __int64 v5; // x1
  __int64 v6; // x2
  ServantStatusListViewItemDrawAppendSkill_c *v7; // x0
  float SKILL_BASE_POS_Y; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_593513F & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_21FFC50(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    byte_593513F = 1;
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
    sub_21FFECC(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  v2->fields.titleBasePosition = localPosition;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v7->static_fields->SKILL_BASE_POS_Y;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x23
  int v13; // w8
  UILabel_o *explanationLabel; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *titleTextSprite; // x21
  __int64 v18; // x2
  System_Int32_array *v19; // x8
  unsigned __int64 v20; // x20
  int v21; // w29
  __int64 v22; // x21
  int32_t v23; // w22
  unsigned __int64 max_length_low; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v26; // x23
  UnityEngine_Transform_o *transform; // x24
  ServantStatusSkillComponent_o *v28; // x24
  int32_t Height; // w0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  ServantStatusListViewItemDrawAppendSkill_c *v36; // x8
  int32_t v37; // w24
  int32_t v38; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v40; // w24
  int32_t v41; // w26
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v49; // x8
  int v50; // w20
  int v51; // w24
  int v52; // w21
  int v53; // w8
  il2cpp_array_size_t v54; // x10
  __int64 v55; // x9
  __int64 v56; // x10
  int32_t *m_Items; // x8
  char v58; // w26
  char v59; // w21
  int v60; // t1
  struct UserServantEntity_o *v61; // x8
  __int64 v62; // x22
  __int64 v63; // x23
  int32_t v64; // w0
  char v65; // w22
  char v66; // w21
  int v67; // w8
  int v68; // w20
  int v69; // w8
  int v70; // w8
  float v71; // s0
  float z; // s10
  float x; // s9
  float y; // s11
  UnityEngine_Object_o *baseCollider; // x20
  float v76; // s8
  int32_t v77; // w1
  int32_t v78; // w1
  int v79; // w20
  float v80; // s8
  float v81; // s11
  float v82; // s9
  float v83; // s10
  float v84; // s8
  int32_t v85; // w20
  float v86; // s9
  float v87; // s10
  UnityEngine_GameObject_o *v88; // x22
  Il2CppObject *Component_object; // x21
  int32_t v90; // w0
  __int64 v91; // x2
  ServantStatusListViewItemDrawAppendSkill_c *v92; // x8
  int32_t v93; // w21
  int v94; // w8
  int *v95; // t2
  int v96; // w9
  ServantStatusListViewItem_o *v97; // [xsp+8h] [xbp-B8h]
  char v98; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935140 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__set_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItemDrawAppendSkill_TypeInfo);
    sub_21FFC50(&StringLiteral_12423/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/);
    sub_21FFC50(&StringLiteral_21606/*"img_txt_extraskill_title"*/);
    byte_5935140 = 1;
  }
  skillList = this->fields.skillList;
  titleList = 0;
  idList = 0;
  releaseStateList = 0;
  explanationList = 0;
  lvList = 0;
  if ( !skillList )
    goto LABEL_147;
  v8 = 0;
  while ( 1 )
  {
    v9 = *((unsigned int *)skillList + 6);
    if ( v8 >= (int)v9 )
      break;
    v12 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)skillList,
            v8,
            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v12, 0);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v8,
        0,
        (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      skillList = this->fields.skillList;
      ++v8;
      if ( skillList )
        continue;
    }
    goto LABEL_147;
  }
  v13 = *((_DWORD *)skillList + 7) + 1;
  *((_DWORD *)skillList + 6) = 0;
  *((_DWORD *)skillList + 7) = v13;
  if ( (int)v9 >= 1 )
    System_Array__Clear(*((System_Array_o **)skillList + 2), 0, v9, 0);
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v9);
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_147;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15, v16);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_21606/*"img_txt_extraskill_title"*/, 0);
    skillList = this->fields.titleTextSprite;
    if ( !skillList )
      goto LABEL_147;
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
    v19 = idList;
    if ( !idList )
      return;
    v97 = item;
    v98 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0x100000000LL;
    v23 = 1;
    while ( 1 )
    {
      max_length_low = LODWORD(v19->max_length);
      if ( (__int64)v20 >= (int)max_length_low )
        break;
      if ( v20 >= max_length_low )
        goto LABEL_149;
      if ( v19->m_Items[v20] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v18);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_147;
        v26 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_147;
        UnityEngine_Transform__SetParent_83279140(transform, (UnityEngine_Transform_o *)skillList, 0, 0);
        if ( !byte_5931945 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        GameObjectExtensions__SetLocalScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v26,
                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_147;
        if ( v20 >= LODWORD(idList->max_length) )
          goto LABEL_149;
        if ( !titleList )
          goto LABEL_147;
        if ( v20 >= LODWORD(titleList->max_length) )
          goto LABEL_149;
        if ( !explanationList )
          goto LABEL_147;
        if ( v20 >= LODWORD(explanationList->max_length) )
          goto LABEL_149;
        if ( !releaseStateList )
          goto LABEL_147;
        if ( v20 >= LODWORD(releaseStateList->max_length) )
          goto LABEL_149;
        if ( !lvList )
          goto LABEL_147;
        if ( v20 >= LODWORD(lvList->max_length) )
          goto LABEL_149;
        v28 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_147;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v23,
          idList->m_Items[v20],
          titleList->m_Items[v20],
          explanationList->m_Items[v20],
          releaseStateList->m_Items[v20],
          lvList->m_Items[v20],
          0);
        Height = ServantStatusSkillComponent__GetHeight(v28, 0);
        v36 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v37 = Height;
        if ( !*(&ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, item, v30);
          v36 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v36->static_fields->SKILL_BASE_HEIGHT;
        v38 = *p_SKILL_BASE_HEIGHT;
        v40 = p_SKILL_BASE_HEIGHT[1] + v37;
        v41 = v40 <= *p_SKILL_BASE_HEIGHT ? v38 : v40;
        if ( !skillList )
          goto LABEL_147;
        v42 = *((_QWORD *)skillList + 2);
        v43 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v42 )
          goto LABEL_147;
        v44 = *((int *)skillList + 6);
        if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v26,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = v42 + 8 * v44;
          *((_DWORD *)skillList + 6) = v44 + 1;
          *(_QWORD *)(v45 + 32) = v26;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 32), (int32_t)v26, v30, v31, v32, v33, v34, v35);
        }
        if ( !idList )
          goto LABEL_147;
        max_length = idList->max_length;
        v21 += v41;
        ++v23;
        if ( v20 == (_DWORD)max_length - 1 )
          goto LABEL_57;
        if ( v20 + 1 >= (unsigned int)max_length )
          goto LABEL_149;
        if ( *(int *)((char *)idList->m_Items + (v22 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !*(&ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, item, v18);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v40 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 57) )
            {
              j_il2cpp_runtime_class_init_0(skillList, item, v18);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v98 |= v40 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v19 = idList;
      ++v20;
      v22 += 0x100000000LL;
      if ( !idList )
        goto LABEL_147;
    }
    if ( v97->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v97->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0) )
        {
          skillList = v97->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_147;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v49 = lvList;
            if ( !lvList )
              goto LABEL_147;
            v50 = lvList->max_length;
            if ( v50 < 1 )
            {
              v51 = 0;
            }
            else
            {
              v51 = 0;
              while ( 1 )
              {
                if ( v50 == v51 )
                  goto LABEL_149;
                if ( lvList->m_Items[v51] <= 9u )
                  break;
                if ( (v50 & ~(v50 >> 31)) == ++v51 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v98 & 1) != 0 )
                v52 = 62;
              else
                v52 = 50;
              if ( !skillList )
                goto LABEL_147;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_147;
              v21 += v52;
              *((_BYTE *)skillList + 97) = 1;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v97->fields._CanMoveCombine_k__BackingField, 0);
              v53 = v21 >= 0 ? v21 : v21 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v53 >> 1), 0);
              v49 = lvList;
              if ( !lvList )
                goto LABEL_147;
            }
LABEL_87:
            v54 = v49->max_length;
            if ( (int)v54 >= 1 )
            {
              v55 = (unsigned int)v49->max_length;
              v56 = (unsigned int)v54 & ~((int)v54 >> 31);
              m_Items = v49->m_Items;
              v58 = 1;
              v59 = 1;
              while ( v55 )
              {
                v60 = *m_Items++;
                --v56;
                --v55;
                v59 &= v60 > 9;
                v58 &= v60 < 1;
                if ( !v56 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_21FFED4(skillList);
            }
            v59 = 1;
            v58 = 1;
LABEL_93:
            v61 = v97->fields.userSvtEntity;
            if ( !v61 )
LABEL_147:
              sub_21FFECC(skillList, item);
            v62 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
            v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v18);
            *(_QWORD *)&v104.fields.currentCryptoKey = v62;
            *(_QWORD *)&v104.fields.fakeValue = v63;
            v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v104, 0);
            v65 = v59 | v58 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v64, 0);
            if ( (v65 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_147;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0);
              v66 = v51 < v50;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v98 & 1) != 0 )
                v67 = 62;
              else
                v67 = 50;
              if ( v51 >= v50 )
                v68 = v67;
              else
                v68 = 0;
              if ( !skillList )
                goto LABEL_147;
              v66 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_147;
              v21 += v68;
              *((_BYTE *)skillList + 97) = 1;
              UICommonButton__SetEnable((UICommonButton_o *)skillList, v97->fields._CanMoveCombine_k__BackingField, 0);
              if ( v21 >= 0 )
                v69 = v21;
              else
                v69 = v21 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v69 >> 1), 0);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_147;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v66, 0);
            if ( v21 >= 0 )
              v70 = v21;
            else
              v70 = v21 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v70 >> 1), 0);
            v71 = 0.0;
            if ( (v65 & 1) == 0 )
              v71 = -120.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v71, 0);
          }
        }
      }
    }
    z = this->fields.baseSize.fields.z;
    x = this->fields.baseSize.fields.x;
    y = this->fields.baseSize.fields.y;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v18);
    v76 = y + (float)v21;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_147;
      v105.fields.x = x;
      v105.fields.y = y + (float)v21;
      v105.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v105, 0);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v77 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v77, 0);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v78 = v76 == INFINITY ? 0x80000000 : (int)v76;
        UIWidget__set_height((UIWidget_o *)skillList, v78, 0);
        skillList = this->fields.titleSprite;
        v79 = v21 >= 0 ? v21 : v21 + 1;
        if ( skillList )
        {
          v80 = this->fields.titleBasePosition.fields.x;
          v81 = this->fields.titleBasePosition.fields.y;
          v82 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0);
          if ( skillList )
          {
            v106.fields.x = v80;
            v106.fields.z = v82;
            v83 = (float)(v79 >> 1);
            v106.fields.y = v81 + v83;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v106, 0);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v84 = this->fields.skillBasePosition.fields.x;
              v85 = 0;
              v86 = this->fields.skillBasePosition.fields.y + v83;
              v87 = this->fields.skillBasePosition.fields.z;
              while ( v85 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v85,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v88 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v88, 0);
                  if ( skillList )
                  {
                    v107.fields.x = v84;
                    v107.fields.y = v86;
                    v107.fields.z = v87;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v107, 0);
                    if ( Component_object )
                    {
                      v90 = ServantStatusSkillComponent__GetHeight((ServantStatusSkillComponent_o *)Component_object, 0);
                      v92 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v93 = v90;
                      if ( !*(&ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, item, v91);
                        v92 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v85;
                      v95 = &v92->static_fields->SKILL_BASE_HEIGHT;
                      v94 = *v95;
                      v96 = v95[1] + v93;
                      if ( v96 > *v95 )
                        v94 = v96;
                      v86 = v86 - (float)v94;
                      if ( skillList )
                        continue;
                    }
                  }
                }
                goto LABEL_147;
              }
              return;
            }
          }
        }
      }
    }
    goto LABEL_147;
  }
}