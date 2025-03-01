void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4BFA6A7 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_4BFA6A7 = 1;
  }
  static_fields = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields;
  static_fields->SKILL_BASE_POS_Y = -25.0;
  *(_QWORD *)&static_fields->SKILL_BASE_HEIGHT = 0x2800000069LL;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill___ctor(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFA6A6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4BFA6A6 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.skillList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__Awake(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawAppendSkill_o *v2; // x19
  struct UISprite_o *baseSprite; // x8
  int32x2_t v4; // d0
  ServantStatusListViewItemDrawAppendSkill_c *v5; // x0
  float SKILL_BASE_POS_Y; // s0

  v2 = this;
  if ( (byte_4BFA6A4 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1C2E12C(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_4BFA6A4 = 1;
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
                                                               0LL)) == 0LL )
  {
    sub_1C2E388(this, method);
  }
  v2->fields.titleBasePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
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


int32_t __fastcall ServantStatusListViewItemDrawAppendSkill__GetKind(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        const MethodInfo *method)
{
  return 6;
}


void __fastcall ServantStatusListViewItemDrawAppendSkill__SetItem(
        ServantStatusListViewItemDrawAppendSkill_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
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
  void *skillList; // x0
  int32_t v21; // w22
  int32_t v22; // w2
  Il2CppObject *v23; // x23
  int v24; // w8
  UILabel_o *explanationLabel; // x21
  UISprite_o *titleTextSprite; // x21
  System_Int32_array *v27; // x8
  unsigned __int64 v28; // x20
  int v29; // w29
  __int64 v30; // x21
  int32_t v31; // w22
  unsigned __int64 max_length; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v34; // x23
  UnityEngine_Transform_o *transform; // x24
  __int64 v36; // x1
  ServantStatusSkillComponent_o *v37; // x24
  int32_t Height; // w0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  ServantStatusListViewItemDrawAppendSkill_c *v45; // x8
  int32_t v46; // w24
  int32_t v47; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v49; // w24
  int32_t v50; // w26
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  __int64 v55; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v58; // x8
  signed int v59; // w20
  signed int v60; // w24
  int v61; // w21
  int v62; // w8
  __int64 v63; // x9
  __int64 v64; // x10
  int32_t *v65; // x8
  char v66; // w26
  char v67; // w21
  int v68; // t1
  struct UserServantEntity_o *v69; // x8
  __int64 v70; // x22
  __int64 v71; // x23
  int32_t v72; // w0
  char v73; // w22
  char v74; // w21
  int v75; // w8
  int v76; // w20
  int v77; // w8
  int v78; // w8
  float v79; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v84; // s8
  int32_t v85; // w1
  int32_t v86; // w1
  int v87; // w20
  float v88; // s8
  float v89; // s11
  float v90; // s9
  float v91; // s10
  float v92; // s8
  float v93; // s9
  int32_t v94; // w20
  float v95; // s10
  UnityEngine_GameObject_o *v96; // x22
  Il2CppObject *Component_object; // x21
  int32_t v98; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v99; // x8
  int32_t v100; // w21
  int v101; // w8
  int *v102; // t2
  int v103; // w9
  ServantStatusListViewItem_o *v104; // [xsp+8h] [xbp-B8h]
  char v105; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFA6A5 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, item);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v13);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v15);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C2E12C(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v17);
    sub_1C2E12C(&StringLiteral_12107/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v18);
    sub_1C2E12C(&StringLiteral_20912/*"img_txt_extraskill_title"*/, v19);
    byte_4BFA6A5 = 1;
  }
  titleList = 0LL;
  idList = 0LL;
  releaseStateList = 0LL;
  explanationList = 0LL;
  lvList = 0LL;
  skillList = this->fields.skillList;
  if ( !skillList )
    goto LABEL_10;
  v21 = 0;
  while ( 1 )
  {
    v22 = *((_DWORD *)skillList + 6);
    if ( v21 >= v22 )
      break;
    v23 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)skillList,
            v21,
            (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720((UnityEngine_Object_o *)v23, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v21,
        0LL,
        (const MethodInfo_366B630 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
      skillList = this->fields.skillList;
      ++v21;
      if ( skillList )
        continue;
    }
    goto LABEL_10;
  }
  v24 = *((_DWORD *)skillList + 7) + 1;
  *((_DWORD *)skillList + 6) = 0;
  *((_DWORD *)skillList + 7) = v24;
  if ( v22 >= 1 )
    System_Array__Clear(*((System_Array_o **)skillList + 2), 0, v22, 0LL);
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20912/*"img_txt_extraskill_title"*/, 0LL);
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
    v27 = idList;
    if ( !idList )
      return;
    v104 = item;
    v105 = 0;
    v28 = 0LL;
    v29 = 0;
    v30 = 0x100000000LL;
    v31 = 1;
    while ( 1 )
    {
      max_length = v27->max_length;
      if ( (__int64)v28 >= (int)max_length )
        break;
      if ( v28 >= max_length )
        goto LABEL_149;
      if ( v27->m_Items[v28 + 1] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v34 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_71011128(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_4BF7D96 )
        {
          sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v36);
          byte_4BF7D96 = 1;
        }
        GameObjectExtensions__SetLocalScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v34,
                      (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v28 >= idList->max_length )
          goto LABEL_149;
        if ( !titleList )
          goto LABEL_10;
        if ( v28 >= titleList->max_length )
          goto LABEL_149;
        if ( !explanationList )
          goto LABEL_10;
        if ( v28 >= explanationList->max_length )
          goto LABEL_149;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v28 >= releaseStateList->max_length )
          goto LABEL_149;
        if ( !lvList )
          goto LABEL_10;
        if ( v28 >= lvList->max_length )
          goto LABEL_149;
        v37 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v31,
          idList->m_Items[v28 + 1],
          titleList->m_Items[v28],
          explanationList->m_Items[v28],
          releaseStateList->m_Items[v28 + 4],
          lvList->m_Items[v28 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight(v37, 0LL);
        v45 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v46 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v45 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v45->static_fields->SKILL_BASE_HEIGHT;
        v47 = *p_SKILL_BASE_HEIGHT;
        v49 = p_SKILL_BASE_HEIGHT[1] + v46;
        v50 = v49 <= *p_SKILL_BASE_HEIGHT ? v47 : v49;
        if ( !skillList )
          goto LABEL_10;
        v51 = *((_QWORD *)skillList + 2);
        v52 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v51 )
          goto LABEL_10;
        v53 = *((int *)skillList + 6);
        if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v34,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = v51 + 8 * v53;
          *((_DWORD *)skillList + 6) = v53 + 1;
          *(_QWORD *)(v54 + 32) = v34;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v54 + 32), (int64_t)v34, v39, v40, v41, v42, v43, v44);
        }
        if ( !idList )
          goto LABEL_10;
        v55 = *(_QWORD *)&idList->max_length;
        v29 += v50;
        ++v31;
        if ( v28 == (_DWORD)v55 - 1 )
          goto LABEL_57;
        if ( v28 + 1 >= (unsigned int)v55 )
          goto LABEL_149;
        if ( *(int *)((char *)&idList->m_Items[1] + (v30 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v49 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v105 |= v49 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v27 = idList;
      ++v28;
      v30 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v104->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v104->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v104->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v58 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v59 = lvList->max_length;
            if ( v59 < 1 )
            {
              v60 = 0;
            }
            else
            {
              v60 = 0;
              while ( 1 )
              {
                if ( v59 == v60 )
                  goto LABEL_149;
                if ( lvList->m_Items[v60 + 1] <= 9u )
                  break;
                if ( v59 == ++v60 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v105 & 1) != 0 )
                v61 = 62;
              else
                v61 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v29 += v61;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v104->fields._CanMoveCombine_k__BackingField,
                0LL);
              v62 = v29 >= 0 ? v29 : v29 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v62 >> 1), 0LL);
              v58 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v63 = v58->max_length;
            if ( v63 << 32 >= 1 )
            {
              v64 = (int)v63;
              v65 = &v58->m_Items[1];
              v66 = 1;
              v67 = 1;
              while ( v63 )
              {
                v68 = *v65++;
                --v64;
                --v63;
                v67 &= v68 > 9;
                v66 &= v68 < 1;
                if ( !v64 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1C2E390(skillList, item);
            }
            v67 = 1;
            v66 = 1;
LABEL_93:
            v69 = v104->fields.userSvtEntity;
            if ( !v69 )
LABEL_10:
              sub_1C2E388(skillList, item);
            v71 = *(_QWORD *)&v69->fields.svtId.fields.currentCryptoKey;
            v70 = *(_QWORD *)&v69->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v111.fields.currentCryptoKey = v71;
            *(_QWORD *)&v111.fields.fakeValue = v70;
            v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v111, 0LL);
            v73 = v67 | v66 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v72, 0LL);
            if ( (v73 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0LL);
              v74 = v60 < v59;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v105 & 1) != 0 )
                v75 = 62;
              else
                v75 = 50;
              if ( v60 >= v59 )
                v76 = v75;
              else
                v76 = 0;
              if ( !skillList )
                goto LABEL_10;
              v74 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v29 += v76;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v104->fields._CanMoveCombine_k__BackingField,
                0LL);
              if ( v29 >= 0 )
                v77 = v29;
              else
                v77 = v29 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v77 >> 1), 0LL);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v74, 0LL);
            if ( v29 >= 0 )
              v78 = v29;
            else
              v78 = v29 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v78 >> 1), 0LL);
            v79 = -120.0;
            if ( (v73 & 1) != 0 )
              v79 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v79, 0LL);
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
    v84 = y + (float)v29;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v112.fields.x = x;
      v112.fields.y = v84;
      v112.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v112, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v85 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v85, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v86 = v84 == INFINITY ? 0x80000000 : (int)v84;
        UIWidget__set_height((UIWidget_o *)skillList, v86, 0LL);
        skillList = this->fields.titleSprite;
        v87 = v29 >= 0 ? v29 : v29 + 1;
        if ( skillList )
        {
          v88 = this->fields.titleBasePosition.fields.x;
          v89 = this->fields.titleBasePosition.fields.y;
          v90 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v91 = (float)(v87 >> 1);
            v113.fields.y = v89 + v91;
            v113.fields.x = v88;
            v113.fields.z = v90;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v113, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v92 = this->fields.skillBasePosition.fields.z;
              v93 = this->fields.skillBasePosition.fields.x;
              v94 = 0;
              v95 = this->fields.skillBasePosition.fields.y + v91;
              while ( v94 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v94,
                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v96 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v96, 0LL);
                  if ( skillList )
                  {
                    v114.fields.x = v93;
                    v114.fields.y = v95;
                    v114.fields.z = v92;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v114, 0LL);
                    if ( Component_object )
                    {
                      v98 = ServantStatusSkillComponent__GetHeight(
                              (ServantStatusSkillComponent_o *)Component_object,
                              0LL);
                      v99 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v100 = v98;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v99 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v94;
                      v102 = &v99->static_fields->SKILL_BASE_HEIGHT;
                      v101 = *v102;
                      v103 = v102[1] + v100;
                      if ( v103 > *v102 )
                        v101 = v103;
                      v95 = v95 - (float)v101;
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