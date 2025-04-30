void __fastcall ServantStatusListViewItemDrawAppendSkill___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawAppendSkill_StaticFields *static_fields; // x8

  if ( (byte_4A4BCB1 & 1) == 0 )
  {
    sub_1B863B8(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v1);
    byte_4A4BCB1 = 1;
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

  if ( (byte_4A4BCB0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4A4BCB0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
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
  if ( (byte_4A4BCAE & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawAppendSkill_o *)sub_1B863B8(
                                                           &ServantStatusListViewItemDrawAppendSkill_TypeInfo,
                                                           method);
    byte_4A4BCAE = 1;
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
    sub_1B86614(this, method);
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
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  ServantStatusListViewItemDrawAppendSkill_c *v41; // x8
  int32_t v42; // w24
  int32_t v43; // w8
  int32_t *p_SKILL_BASE_HEIGHT; // t2
  int32_t v45; // w24
  int32_t v46; // w26
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  __int64 v51; // x9
  int32_t SKILL_BASE_HEIGHT; // w8
  UserServantEntity_o *userSvtEntity; // x0
  System_Int32_array *v54; // x8
  signed int v55; // w20
  signed int v56; // w24
  int v57; // w21
  int v58; // w8
  __int64 v59; // x9
  __int64 v60; // x10
  int32_t *v61; // x8
  char v62; // w26
  char v63; // w21
  int v64; // t1
  struct UserServantEntity_o *v65; // x8
  __int64 v66; // x22
  __int64 v67; // x23
  int32_t v68; // w0
  char v69; // w22
  char v70; // w21
  int v71; // w8
  int v72; // w20
  int v73; // w8
  int v74; // w8
  float v75; // s0
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x20
  float v80; // s8
  int32_t v81; // w1
  int32_t v82; // w1
  int v83; // w20
  float v84; // s8
  float v85; // s11
  float v86; // s9
  float v87; // s10
  float v88; // s8
  float v89; // s9
  int32_t v90; // w20
  float v91; // s10
  UnityEngine_GameObject_o *v92; // x22
  Il2CppObject *Component_object; // x21
  int32_t v94; // w0
  ServantStatusListViewItemDrawAppendSkill_c *v95; // x8
  int32_t v96; // w21
  int v97; // w8
  int *v98; // t2
  int v99; // w9
  ServantStatusListViewItem_o *v100; // [xsp+8h] [xbp-B8h]
  char v101; // [xsp+14h] [xbp-ACh]
  System_Int32_array *lvList; // [xsp+18h] [xbp-A8h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+20h] [xbp-A0h] BYREF
  System_String_array *explanationList; // [xsp+28h] [xbp-98h] BYREF
  System_String_array *titleList; // [xsp+30h] [xbp-90h] BYREF
  System_Int32_array *idList; // [xsp+38h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4BCAF & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__set_Item__, v12);
    sub_1B863B8(&LocalizationManager_TypeInfo, v13);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B863B8(&ServantStatusListViewItemDrawAppendSkill_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_11728/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, v18);
    sub_1B863B8(&StringLiteral_20343/*"img_txt_extraskill_title"*/, v19);
    byte_4A4BCAF = 1;
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
            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)v23, 0LL);
    skillList = this->fields.skillList;
    if ( skillList )
    {
      System_Collections_Generic_List_object___set_Item(
        (System_Collections_Generic_List_object__o *)skillList,
        v21,
        0LL,
        (const MethodInfo_35FC6DC *)Method_System_Collections_Generic_List_GameObject__set_Item__);
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
    skillList = LocalizationManager__Get((System_String_o *)StringLiteral_11728/*"SERVANT_STATUS_EXPLANATION_SKILL_PASSIVE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_10;
    UILabel__set_text(explanationLabel, (System_String_o *)skillList, 0LL);
    titleTextSprite = this->fields.titleTextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(titleTextSprite, (System_String_o *)StringLiteral_20343/*"img_txt_extraskill_title"*/, 0LL);
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
    v100 = item;
    v101 = 0;
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
                      (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !skillList )
          goto LABEL_10;
        v34 = (UnityEngine_GameObject_o *)skillList;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillList, 0LL);
        skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_10;
        UnityEngine_Transform__SetParent_69379772(transform, (UnityEngine_Transform_o *)skillList, 0, 0LL);
        if ( !byte_4A487E6 )
        {
          sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v36);
          byte_4A487E6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        skillList = UnityEngine_GameObject__GetComponent_object_(
                      v34,
                      (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
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
        v41 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        v42 = Height;
        if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
          v41 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
        }
        skillList = this->fields.skillList;
        p_SKILL_BASE_HEIGHT = &v41->static_fields->SKILL_BASE_HEIGHT;
        v43 = *p_SKILL_BASE_HEIGHT;
        v45 = p_SKILL_BASE_HEIGHT[1] + v42;
        v46 = v45 <= *p_SKILL_BASE_HEIGHT ? v43 : v45;
        if ( !skillList )
          goto LABEL_10;
        v47 = *((_QWORD *)skillList + 2);
        v48 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++*((_DWORD *)skillList + 7);
        if ( !v47 )
          goto LABEL_10;
        v49 = *((int *)skillList + 6);
        if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skillList,
            (Il2CppObject *)v34,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * v49;
          *((_DWORD *)skillList + 6) = v49 + 1;
          *(_QWORD *)(v50 + 32) = v34;
          sub_1B8635C((CGThumbnailListItem_o *)(v50 + 32), (int32_t)v34, v39, v40);
        }
        if ( !idList )
          goto LABEL_10;
        v51 = *(_QWORD *)&idList->max_length;
        v29 += v46;
        ++v31;
        if ( v28 == (_DWORD)v51 - 1 )
          goto LABEL_57;
        if ( v28 + 1 >= (unsigned int)v51 )
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
          if ( v45 > SKILL_BASE_HEIGHT )
          {
            if ( !*((_DWORD *)skillList + 56) )
            {
              j_il2cpp_runtime_class_init_0(skillList);
              SKILL_BASE_HEIGHT = ServantStatusListViewItemDrawAppendSkill_TypeInfo->static_fields->SKILL_BASE_HEIGHT;
            }
            v101 |= v45 - SKILL_BASE_HEIGHT > 10;
          }
        }
      }
      v27 = idList;
      ++v28;
      v30 += 0x100000000LL;
      if ( !idList )
        goto LABEL_10;
    }
    if ( v100->fields._IsDisplayCombineButton_k__BackingField )
    {
      userSvtEntity = v100->fields.userSvtEntity;
      if ( userSvtEntity )
      {
        if ( !UserServantEntity__IsLeave(userSvtEntity, 0LL) )
        {
          skillList = v100->fields.userSvtEntity;
          if ( !skillList )
            goto LABEL_10;
          skillList = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)skillList, 0LL);
          if ( ((unsigned __int8)skillList & 1) == 0 )
          {
            v54 = lvList;
            if ( !lvList )
              goto LABEL_10;
            v55 = lvList->max_length;
            if ( v55 < 1 )
            {
              v56 = 0;
            }
            else
            {
              v56 = 0;
              while ( 1 )
              {
                if ( v55 == v56 )
                  goto LABEL_149;
                if ( lvList->m_Items[v56 + 1] <= 9u )
                  break;
                if ( v55 == ++v56 )
                  goto LABEL_87;
              }
              skillList = this->fields.reinforceObject;
              if ( (v101 & 1) != 0 )
                v57 = 62;
              else
                v57 = 50;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.reinforceButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v29 += v57;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v100->fields._CanMoveCombine_k__BackingField,
                0LL);
              v58 = v29 >= 0 ? v29 : v29 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v58 >> 1), 0LL);
              v54 = lvList;
              if ( !lvList )
                goto LABEL_10;
            }
LABEL_87:
            v59 = v54->max_length;
            if ( v59 << 32 >= 1 )
            {
              v60 = (int)v59;
              v61 = &v54->m_Items[1];
              v62 = 1;
              v63 = 1;
              while ( v59 )
              {
                v64 = *v61++;
                --v60;
                --v59;
                v63 &= v64 > 9;
                v62 &= v64 < 1;
                if ( !v60 )
                  goto LABEL_93;
              }
LABEL_149:
              sub_1B8661C(skillList, item);
            }
            v63 = 1;
            v62 = 1;
LABEL_93:
            v65 = v100->fields.userSvtEntity;
            if ( !v65 )
LABEL_10:
              sub_1B86614(skillList, item);
            v67 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v66 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v107.fields.currentCryptoKey = v67;
            *(_QWORD *)&v107.fields.fakeValue = v66;
            v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v107, 0LL);
            v69 = v63 | v62 | UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(v68, 0LL);
            if ( (v69 & 1) != 0 )
            {
              skillList = this->fields.exchangeObject;
              if ( !skillList )
                goto LABEL_10;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 0, 0LL);
              v70 = v56 < v55;
            }
            else
            {
              skillList = this->fields.exchangeObject;
              if ( (v101 & 1) != 0 )
                v71 = 62;
              else
                v71 = 50;
              if ( v56 >= v55 )
                v72 = v71;
              else
                v72 = 0;
              if ( !skillList )
                goto LABEL_10;
              v70 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, 1, 0LL);
              skillList = this->fields.exchangeButton;
              if ( !skillList )
                goto LABEL_10;
              *((_BYTE *)skillList + 97) = 1;
              v29 += v72;
              UICommonButton__SetEnable(
                (UICommonButton_o *)skillList,
                v100->fields._CanMoveCombine_k__BackingField,
                0LL);
              if ( v29 >= 0 )
                v73 = v29;
              else
                v73 = v29 + 1;
              GameObjectExtensions__SetLocalPositionY(this->fields.exchangeObject, (float)-(v73 >> 1), 0LL);
            }
            skillList = this->fields.reinforceBg;
            if ( !skillList )
              goto LABEL_10;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillList, v70, 0LL);
            if ( v29 >= 0 )
              v74 = v29;
            else
              v74 = v29 + 1;
            GameObjectExtensions__SetLocalPositionY(this->fields.reinforceBg, (float)-(v74 >> 1), 0LL);
            v75 = -120.0;
            if ( (v69 & 1) != 0 )
              v75 = 0.0;
            GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, v75, 0LL);
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
    v80 = y + (float)v29;
    if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
    {
      skillList = this->fields.baseCollider;
      if ( !skillList )
        goto LABEL_10;
      v108.fields.x = x;
      v108.fields.y = v80;
      v108.fields.z = z;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)skillList, v108, 0LL);
    }
    skillList = this->fields.baseSprite;
    if ( skillList )
    {
      v81 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width((UIWidget_o *)skillList, v81, 0LL);
      skillList = this->fields.baseSprite;
      if ( skillList )
      {
        v82 = v80 == INFINITY ? 0x80000000 : (int)v80;
        UIWidget__set_height((UIWidget_o *)skillList, v82, 0LL);
        skillList = this->fields.titleSprite;
        v83 = v29 >= 0 ? v29 : v29 + 1;
        if ( skillList )
        {
          v84 = this->fields.titleBasePosition.fields.x;
          v85 = this->fields.titleBasePosition.fields.y;
          v86 = this->fields.titleBasePosition.fields.z;
          skillList = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillList, 0LL);
          if ( skillList )
          {
            v87 = (float)(v83 >> 1);
            v109.fields.y = v85 + v87;
            v109.fields.x = v84;
            v109.fields.z = v86;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v109, 0LL);
            skillList = this->fields.skillList;
            if ( skillList )
            {
              v88 = this->fields.skillBasePosition.fields.z;
              v89 = this->fields.skillBasePosition.fields.x;
              v90 = 0;
              v91 = this->fields.skillBasePosition.fields.y + v87;
              while ( v90 < *((_DWORD *)skillList + 6) )
              {
                skillList = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)skillList,
                              v90,
                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
                if ( skillList )
                {
                  v92 = (UnityEngine_GameObject_o *)skillList;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)skillList,
                                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusSkillComponent___);
                  skillList = UnityEngine_GameObject__get_transform(v92, 0LL);
                  if ( skillList )
                  {
                    v110.fields.x = v89;
                    v110.fields.y = v91;
                    v110.fields.z = v88;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillList, v110, 0LL);
                    if ( Component_object )
                    {
                      v94 = ServantStatusSkillComponent__GetHeight(
                              (ServantStatusSkillComponent_o *)Component_object,
                              0LL);
                      v95 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      v96 = v94;
                      if ( !ServantStatusListViewItemDrawAppendSkill_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawAppendSkill_TypeInfo);
                        v95 = ServantStatusListViewItemDrawAppendSkill_TypeInfo;
                      }
                      skillList = this->fields.skillList;
                      ++v90;
                      v98 = &v95->static_fields->SKILL_BASE_HEIGHT;
                      v97 = *v98;
                      v99 = v98[1] + v96;
                      if ( v99 > *v98 )
                        v97 = v99;
                      v91 = v91 - (float)v97;
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