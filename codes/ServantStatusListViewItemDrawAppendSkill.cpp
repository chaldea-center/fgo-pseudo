void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4B131EA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1, v2);
    byte_4B131EA = 1;
  }
  static_fields = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields;
  static_fields->SKILL_BASE_POS_Y = -25.0;
  *(_QWORD *)&static_fields->SKILL_BASE_HEIGHT = 0x2800000069LL;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B131E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B131E9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewItemDrawAppendSkill_o *v3; // x19
  struct UISprite_o *baseSprite; // x8
  int32x2_t v5; // d0
  __int64 v6; // x1
  ServantStatusListViewItemDrawAppendSkill_c *v7; // x0
  float SKILL_BASE_POS_Y; // s0

  v3 = this;
  if ( (byte_4B131E7 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1BCA7E0(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method,
                                                           v2);
    byte_4B131E7 = 1;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite
    || (v5.n64_u64[0] = *(unsigned __int64 *)&baseSprite->fields.mWidth,
        this = (ServantStatusListViewItemDrawAppendSkill_o *)v3->fields.titleSprite,
        v3->fields.baseSize.fields.z = 0.0,
        *(float32x2_t *)&v3->fields.baseSize.fields.x = vcvt_f32_s32(v5),
        !this)
    || (this = (ServantStatusListViewItemDrawAppendSkill_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL)) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  v3->fields.titleBasePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, v6);
    v7 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
  }
  SKILL_BASE_POS_Y = v7->static_fields->SKILL_BASE_POS_Y;
  v3->fields.skillBasePosition.fields.x = 0.0;
  v3->fields.skillBasePosition.fields.z = 0.0;
  v3->fields.skillBasePosition.fields.y = SKILL_BASE_POS_Y;
}


int32_t __fastcall ServantStatusListViewItemDrawAppendSkill__GetKind(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  return 6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawAppendSkill__SetItem(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  void *skillList; // x0
  int32_t v34; // w22
  int32_t v35; // w2
  __int64 v36; // x1
  Il2CppObject *v37; // x23
  int v38; // w8
  UILabel_o *explanationLabel; // x21
  __int64 v40; // x1
  UISprite_o *titleTextSprite; // x21
  System_Int32_array *v42; // x8
  unsigned __int64 v43; // x20
  int v44; // w29
  __int64 v45; // x21
  int32_t v46; // w22
  unsigned __int64 max_length; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v49; // x23
  UnityEngine_Transform_o *transform; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  ServantStatusSkillComponent_o *v53; // x24
  int32_t Height; // w0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  ServantStatusListViewItemDrawAppendSkill_c *v61; // x8
  int32_t v62; // w24
  int32_t v63; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v65; // w24
  int32_t v66; // w26
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  __int64 v71; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v74; // x8
  signed int v75; // w20
  signed int v76; // w24
  int v77; // w21
  int v78; // w8
  __int64 v79; // x9
  __int64 v80; // x10
  int32_t *v81; // x8
  char v82; // w26
  char v83; // w21
  int v84; // t1
  struct UserServantEntity_o *v85; // x8
  __int64 v86; // x22
  __int64 v87; // x23
  int32_t v88; // w0
  char v89; // w22
  char v90; // w21
  int v91; // w8
  int v92; // w20
  int v93; // w8
  int v94; // w8
  float v95; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v100; // s8
  int32_t v101; // w1
  int32_t v102; // w1
  int v103; // w20
  float v104; // s8
  float v105; // s11
  float v106; // s9
  float v107; // s10
  float v108; // s8
  float v109; // s9
  int32_t v110; // w20
  float v111; // s10
  UnityEngine_GameObject_o *v112; // x22
  Il2CppObject *Component_object; // x21
  int32_t v114; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v115; // x8
  int32_t v116; // w21
  int v117; // w8
  int *v118; // t2
  int v119; // w9
  ServantStatusListViewItem_o *v120; // [xsp+8h] [xbp-B8h]
  char v121; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B131E8 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__set_Item__, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_20751/*"img_txt_extraskill_title"*/, v31, v32);
    byte_4B131E8 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  skillList = this->fields.skillList;
  if ( !skillList )
    goto LABEL_10;
  v34 = 0;
  while ( 1 )
  {
    v35 = *((_DWORD *)skillList + 6);
    if ( v34 >= v35 )
      break;
    v37 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)skillList,
            v34,
            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v37, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v34,
        0LL,
        (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      skillList = this->fields.skillList;
      ++v34;
      if ( skillList )
        continue;
    }
    goto LABEL_10;
  }
  v38 = *((_DWORD *)skillList + 7) + 1;
  *((_DWORD *)skillList + 6) = 0;
  *((_DWORD *)skillList + 7) = v38;
  if ( v35 >= 1 )
    System_Array__Clear(*((System_Array_o **)skillList + 2), 0, v35, 0LL);
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20751/*"img_txt_extraskill_title"*/, 0LL);
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
      0LL);
    v42 = idList;
    if ( !idList )
      return;
    v120 = item;
    v121 = 0;
    v43 = 0LL;
    v44 = 0;
    v45 = 0x100000000LL;
    v46 = 1;
    while ( 1 )
    {
      max_length = v42->max_length;
      if ( (__int64)v43 >= (int)max_length )
        break;
      if ( v43 >= max_length )
        goto LABEL_149;
      if ( v42->m_Items[v43 + 1] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v49 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_70175492(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_4B109C6 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v51, v52);
          byte_4B109C6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v49,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v43 >= idList->max_length )
          goto LABEL_149;
        if ( !titleList )
          goto LABEL_10;
        if ( v43 >= titleList->max_length )
          goto LABEL_149;
        if ( !explanationList )
          goto LABEL_10;
        if ( v43 >= explanationList->max_length )
          goto LABEL_149;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v43 >= releaseStateList->max_length )
          goto LABEL_149;
        if ( !lvList )
          goto LABEL_10;
        if ( v43 >= lvList->max_length )
          goto LABEL_149;
        v53 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v46,
          idList->m_Items[v43 + 1],
          titleList->m_Items[v43],
          explanationList->m_Items[v43],
          releaseStateList->m_Items[v43 + 4],
          lvList->m_Items[v43 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight(v53, 0LL);
        v61 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v62 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, item);
          v61 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v61->static_fields->SKILL_BASE_HEIGHT;
        v63 = *p_SKILL_BASE_HEIGHT;
        v65 = p_SKILL_BASE_HEIGHT[1] + v62;
        v66 = v65 <= *p_SKILL_BASE_HEIGHT ? v63 : v65;
        if ( !skillList )
          goto LABEL_10;
        v67 = *((_QWORD *)skillList + 2);
        v68 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v67 )
          goto LABEL_10;
        v69 = *((int *)skillList + 6);
        if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v49,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = v67 + 8 * v69;
          *((_DWORD *)skillList + 6) = v69 + 1;
          *(_QWORD *)(v70 + 32) = v49;
          sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 32), (int64_t)v49, v55, v56, v57, v58, v59, v60);
        }
        if ( !idList )
          goto LABEL_10;
        v71 = *(_QWORD *)&idList->max_length;
        v44 += v66;
        ++v46;
        if ( v43 == (_DWORD)v71 - 1 )
          goto LABEL_57;
        if ( v43 + 1 >= (unsigned int)v71 )
          goto LABEL_149;
        if ( *(int *)((char *)&idList->m_Items[1] + (v45 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, item);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v65 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList, item);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v121 |= v65 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v42 = idList;
      ++v43;
      v45 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v120->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v120->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v120->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v74 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v75 = lvList->max_length;
            if ( v75 < 1 )
            {
              v76 = 0;
            }
            else
            {
              v76 = 0;
              while ( 1 )
              {
                if ( v75 == v76 )
                  goto LABEL_149;
                if ( lvList->m_Items[v76 + 1] <= 9u )
                  break;
                if ( v75 == ++v76 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v121 & 1) != 0 )
                v77 = 62;
              else
                v77 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v44 += v77;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v120->fields._CanMoveCombine_k__BackingField,
                0LL);
              v78 = v44 >= 0 ? v44 : v44 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v78 >> 1), 0LL);
              v74 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v79 = v74->max_length;
            if ( v79 << 32 >= 1 )
            {
              v80 = (int)v79;
              v81 = &v74->m_Items[1];
              v82 = 1;
              v83 = 1;
              while ( v79 )
              {
                v84 = *v81++;
                --v80;
                --v79;
                v83 &= v84 > 9;
                v82 &= v84 < 1;
                if ( !v80 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1BCAA44(skillList, item);
            }
            v83 = 1;
            v82 = 1;
LABEL_93:
            v85 = v120->fields.userSvtEntity;
            if ( !v85 )
LABEL_10:
              sub_1BCAA3C(skillList, item);
            v87 = *(_QWORD *)&v85->fields.svtId.fields.currentCryptoKey;
            v86 = *(_QWORD *)&v85->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
            *(_QWORD *)&v127.fields.currentCryptoKey = v87;
            *(_QWORD *)&v127.fields.fakeValue = v86;
            v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v127, 0LL);
            v89 = v83 | v82 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v88, 0LL);
            if ( (v89 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0LL);
              v90 = v76 < v75;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v121 & 1) != 0 )
                v91 = 62;
              else
                v91 = 50;
              if ( v76 >= v75 )
                v92 = v91;
              else
                v92 = 0;
              if ( !skillList )
                goto LABEL_10;
              v90 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v44 += v92;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v120->fields._CanMoveCombine_k__BackingField,
                0LL);
              if ( v44 >= 0 )
                v93 = v44;
              else
                v93 = v44 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v93 >> 1), 0LL);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v90, 0LL);
            if ( v44 >= 0 )
              v94 = v44;
            else
              v94 = v44 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v94 >> 1), 0LL);
            v95 = -120.0;
            if ( (v89 & 1) != 0 )
              v95 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v95, 0LL);
          }
        }
      }
    }
    x = this->fields.baseSize.fields.x;
    y = this->fields.baseSize.fields.y;
    z = this->fields.baseSize.fields.z;
    baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    v100 = y + (float)v44;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v128.fields.x = x;
      v128.fields.y = v100;
      v128.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v128, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v101 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v101, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v102 = v100 == INFINITY ? 0x80000000 : (int)v100;
        UIWidget__set_height((UIWidget_o *)skillList, v102, 0LL);
        skillList = this->fields.titleSprite;
        v103 = v44 >= 0 ? v44 : v44 + 1;
        if ( skillList )
        {
          v104 = this->fields.titleBasePosition.fields.x;
          v105 = this->fields.titleBasePosition.fields.y;
          v106 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v107 = (float)(v103 >> 1);
            v129.fields.y = v105 + v107;
            v129.fields.x = v104;
            v129.fields.z = v106;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v129, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v108 = this->fields.skillBasePosition.fields.z;
              v109 = this->fields.skillBasePosition.fields.x;
              v110 = 0;
              v111 = this->fields.skillBasePosition.fields.y + v107;
              while ( v110 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v110,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v112 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v112, 0LL);
                  if ( skillList )
                  {
                    v130.fields.x = v109;
                    v130.fields.y = v111;
                    v130.fields.z = v108;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v130, 0LL);
                    if ( Component_object )
                    {
                      v114 = ServantStatusSkillComponent__GetHeight(
                               (ServantStatusSkillComponent_o *)Component_object,
                               0LL);
                      v115 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v116 = v114;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo, item);
                        v115 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v110;
                      v118 = &v115->static_fields->SKILL_BASE_HEIGHT;
                      v117 = *v118;
                      v119 = v118[1] + v116;
                      if ( v119 > *v118 )
                        v117 = v119;
                      v111 = v111 - (float)v117;
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