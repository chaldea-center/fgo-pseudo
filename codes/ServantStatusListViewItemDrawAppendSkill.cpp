void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4B41C0B & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_4B41C0B = 1;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B41C0A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4B41C0A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
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
  if ( (byte_4B41C08 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1BDB878(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_4B41C08 = 1;
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
    sub_1BDBAD4(this, method);
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
  __int64 v27; // x2
  System_Int32_array *v28; // x8
  unsigned __int64 v29; // x20
  int v30; // w29
  __int64 v31; // x21
  int32_t v32; // w22
  unsigned __int64 max_length; // x9
  Il2CppObject *srcSkillObj; // x23
  UnityEngine_GameObject_o *v35; // x23
  UnityEngine_Transform_o *transform; // x24
  __int64 v37; // x1
  ServantStatusSkillComponent_o *v38; // x24
  int32_t Height; // w0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  ServantStatusListViewItemDrawAppendSkill_c *v42; // x8
  int32_t v43; // w24
  int32_t v44; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v46; // w24
  int32_t v47; // w26
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  __int64 v52; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v55; // x8
  signed int v56; // w20
  signed int v57; // w24
  int v58; // w21
  int v59; // w8
  __int64 v60; // x9
  __int64 v61; // x10
  int32_t *v62; // x8
  char v63; // w26
  char v64; // w21
  int v65; // t1
  struct UserServantEntity_o *v66; // x8
  __int64 v67; // x22
  __int64 v68; // x23
  int32_t v69; // w0
  char v70; // w22
  char v71; // w21
  int v72; // w8
  int v73; // w20
  int v74; // w8
  int v75; // w8
  float v76; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v81; // s8
  int32_t v82; // w1
  int32_t v83; // w1
  int v84; // w20
  float v85; // s8
  float v86; // s11
  float v87; // s9
  float v88; // s10
  float v89; // s8
  float v90; // s9
  int32_t v91; // w20
  float v92; // s10
  UnityEngine_GameObject_o *v93; // x22
  Il2CppObject *Component_object; // x21
  int32_t v95; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v96; // x8
  int32_t v97; // w21
  int v98; // w8
  int *v99; // t2
  int v100; // w9
  ServantStatusListViewItem_o *v101; // [xsp+8h] [xbp-B8h]
  char v102; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B41C09 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v15);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BDB878(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_11902/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v18);
    sub_1BDB878(&StringLiteral_20658/*"img_txt_extraskill_title"*/, v19);
    byte_4B41C09 = 1;
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
            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)v23, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v21,
        0LL,
        (const MethodInfo_36D5B48 *)Method_System_Collections_Generic_List_GameObject__set_Item__);
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
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11902/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20658/*"img_txt_extraskill_title"*/, 0LL);
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
    v28 = idList;
    if ( !idList )
      return;
    v101 = item;
    v102 = 0;
    v29 = 0LL;
    v30 = 0;
    v31 = 0x100000000LL;
    v32 = 1;
    while ( 1 )
    {
      max_length = v28->max_length;
      if ( (__int64)v29 >= (int)max_length )
        break;
      if ( v29 >= max_length )
        goto LABEL_149;
      if ( v28->m_Items[v29 + 1] >= 1 )
      {
        srcSkillObj = (Il2CppObject *)this->fields.srcSkillObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        skillList = UnityEngine_Object__Instantiate_object_(
                      srcSkillObj,
                      (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v35 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_70307860(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_4B3E916 )
        {
          sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v37);
          byte_4B3E916 = 1;
        }
        GameObjectExtensions__SetLocalScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v35,
                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
        if ( !idList )
          goto LABEL_10;
        if ( v29 >= idList->max_length )
          goto LABEL_149;
        if ( !titleList )
          goto LABEL_10;
        if ( v29 >= titleList->max_length )
          goto LABEL_149;
        if ( !explanationList )
          goto LABEL_10;
        if ( v29 >= explanationList->max_length )
          goto LABEL_149;
        if ( !releaseStateList )
          goto LABEL_10;
        if ( v29 >= releaseStateList->max_length )
          goto LABEL_149;
        if ( !lvList )
          goto LABEL_10;
        if ( v29 >= lvList->max_length )
          goto LABEL_149;
        v38 = (ServantStatusSkillComponent_o *)skillList;
        if ( !skillList )
          goto LABEL_10;
        ServantStatusSkillComponent__SetItem(
          (ServantStatusSkillComponent_o *)skillList,
          v32,
          idList->m_Items[v29 + 1],
          titleList->m_Items[v29],
          explanationList->m_Items[v29],
          releaseStateList->m_Items[v29 + 4],
          lvList->m_Items[v29 + 1],
          0LL);
        Height = ServantStatusSkillComponent__GetHeight(v38, 0LL);
        v42 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v43 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v42 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v42->static_fields->SKILL_BASE_HEIGHT;
        v44 = *p_SKILL_BASE_HEIGHT;
        v46 = p_SKILL_BASE_HEIGHT[1] + v43;
        v47 = v46 <= *p_SKILL_BASE_HEIGHT ? v44 : v46;
        if ( !skillList )
          goto LABEL_10;
        v48 = *((_QWORD *)skillList + 2);
        v49 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v48 )
          goto LABEL_10;
        v50 = *((int *)skillList + 6);
        if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v35,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = v48 + 8 * v50;
          *((_DWORD *)skillList + 6) = v50 + 1;
          *(_QWORD *)(v51 + 32) = v35;
          sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 32), (int32_t)v35, v40, v41);
        }
        if ( !idList )
          goto LABEL_10;
        v52 = *(_QWORD *)&idList->max_length;
        v30 += v47;
        ++v32;
        if ( v29 == (_DWORD)v52 - 1 )
          goto LABEL_57;
        if ( v29 + 1 >= (unsigned int)v52 )
          goto LABEL_149;
        if ( *(int *)((char *)&idList->m_Items[1] + (v31 >> 30)) <= 0 )
        {
LABEL_57:
          skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
            skillList = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
          }
          SKILL_BASE_HEIGHT = *(_DWORD *)(*((_QWORD *)skillList + 23) + 4LL);
          if ( v46 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v102 |= v46 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v28 = idList;
      ++v29;
      v31 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v101->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v101->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v101->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v55 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v56 = lvList->max_length;
            if ( v56 < 1 )
            {
              v57 = 0;
            }
            else
            {
              v57 = 0;
              while ( 1 )
              {
                if ( v56 == v57 )
                  goto LABEL_149;
                if ( lvList->m_Items[v57 + 1] <= 9u )
                  break;
                if ( v56 == ++v57 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v102 & 1) != 0 )
                v58 = 62;
              else
                v58 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v30 += v58;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v101->fields._CanMoveCombine_k__BackingField,
                0LL);
              v59 = v30 >= 0 ? v30 : v30 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v59 >> 1), 0LL);
              v55 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v60 = v55->max_length;
            if ( v60 << 32 >= 1 )
            {
              v61 = (int)v60;
              v62 = &v55->m_Items[1];
              v63 = 1;
              v64 = 1;
              while ( v60 )
              {
                v65 = *v62++;
                --v61;
                --v60;
                v64 &= v65 > 9;
                v63 &= v65 < 1;
                if ( !v61 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1BDBADC(skillList, item, v27);
            }
            v64 = 1;
            v63 = 1;
LABEL_93:
            v66 = v101->fields.userSvtEntity;
            if ( !v66 )
LABEL_10:
              sub_1BDBAD4(skillList, item);
            v68 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
            v67 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v108.fields.currentCryptoKey = v68;
            *(_QWORD *)&v108.fields.fakeValue = v67;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v108, 0LL);
            v70 = v64 | v63 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v69, 0LL);
            if ( (v70 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0LL);
              v71 = v57 < v56;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v102 & 1) != 0 )
                v72 = 62;
              else
                v72 = 50;
              if ( v57 >= v56 )
                v73 = v72;
              else
                v73 = 0;
              if ( !skillList )
                goto LABEL_10;
              v71 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v30 += v73;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v101->fields._CanMoveCombine_k__BackingField,
                0LL);
              if ( v30 >= 0 )
                v74 = v30;
              else
                v74 = v30 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v74 >> 1), 0LL);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v71, 0LL);
            if ( v30 >= 0 )
              v75 = v30;
            else
              v75 = v30 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v75 >> 1), 0LL);
            v76 = -120.0;
            if ( (v70 & 1) != 0 )
              v76 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v76, 0LL);
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
    v81 = y + (float)v30;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v109.fields.x = x;
      v109.fields.y = v81;
      v109.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v109, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v82 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v82, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v83 = v81 == INFINITY ? 0x80000000 : (int)v81;
        UIWidget__set_height((UIWidget_o *)skillList, v83, 0LL);
        skillList = this->fields.titleSprite;
        v84 = v30 >= 0 ? v30 : v30 + 1;
        if ( skillList )
        {
          v85 = this->fields.titleBasePosition.fields.x;
          v86 = this->fields.titleBasePosition.fields.y;
          v87 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v88 = (float)(v84 >> 1);
            v110.fields.y = v86 + v88;
            v110.fields.x = v85;
            v110.fields.z = v87;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v110, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v89 = this->fields.skillBasePosition.fields.z;
              v90 = this->fields.skillBasePosition.fields.x;
              v91 = 0;
              v92 = this->fields.skillBasePosition.fields.y + v88;
              while ( v91 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v91,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v93 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v93, 0LL);
                  if ( skillList )
                  {
                    v111.fields.x = v90;
                    v111.fields.y = v92;
                    v111.fields.z = v89;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v111, 0LL);
                    if ( Component_object )
                    {
                      v95 = ServantStatusSkillComponent__GetHeight(
                              (ServantStatusSkillComponent_o *)Component_object,
                              0LL);
                      v96 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v97 = v95;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v96 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v91;
                      v99 = &v96->static_fields->SKILL_BASE_HEIGHT;
                      v98 = *v99;
                      v100 = v99[1] + v97;
                      if ( v100 > *v99 )
                        v98 = v100;
                      v92 = v92 - (float)v98;
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