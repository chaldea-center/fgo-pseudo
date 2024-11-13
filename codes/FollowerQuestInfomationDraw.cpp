void __fastcall FollowerQuestInfomationDraw___ctor(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerQuestInfomationDraw__Awake(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  UIWidget_o *restrictionMessageLabel; // x8

  restrictionMessageLabel = (UIWidget_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageLabel )
    sub_1BCAA3C(this, method);
  this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth;
  UIWidget__set_width(restrictionMessageLabel, 1000, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR(
        FollowerQuestInfomationDraw_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B1133C & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos, method);
    byte_4B1133C = 1;
  }
  v6 = sub_1BCAA2C(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_DWORD *)(v6 + 40) = pos;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall FollowerQuestInfomationDraw__OnClick(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B11340 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FollowerQuestInfomationDraw_OnClick__, method, v2);
    byte_4B11340 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v4 = Method_FollowerQuestInfomationDraw_OnClick__;
    if ( (*((_BYTE *)Method_FollowerQuestInfomationDraw_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FollowerQuestInfomationDraw_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  }
}


void __fastcall FollowerQuestInfomationDraw__SetInfomation(
        FollowerQuestInfomationDraw_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t pos,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_Collections_IEnumerator_o *dispCRW; // x1
  UnityEngine_GameObject_o *trendInfoBase; // x0
  const MethodInfo *v11; // x2
  bool v12; // w0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  struct System_Collections_IEnumerator_o *v16; // x0

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  dispCRW = this->fields.dispCRW;
  if ( dispCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCRW, 0LL);
    this->fields.dispCRW = 0LL;
    sub_1BCA784(&this->fields.dispCRW, 0LL);
  }
  trendInfoBase = this->fields.trendInfoBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0LL);
  trendInfoBase = (UnityEngine_GameObject_o *)this->fields.restrictionMessageBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  trendInfoBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)trendInfoBase, 0LL);
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0LL);
  v12 = FollowerQuestInfomationDraw__SetTrendDisp(this, classIds, v11);
  this->fields.isDispTrend = v12;
  if ( !v12 && (!*p_questRestrictionInfo || QuestRestrictionInfo__IsEmpty(*p_questRestrictionInfo, 0LL)) )
  {
    FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(this, v13);
    trendInfoBase = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
    if ( trendInfoBase )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))trendInfoBase->klass[1]._1.castClass)(
        trendInfoBase,
        trendInfoBase->klass[1]._1.declaringType,
        0.0);
      FollowerQuestInfomationDraw__SetRestrictionDisp(this, 0LL, v15);
      this->fields.isClick = 1;
      return;
    }
LABEL_12:
    sub_1BCAA3C(trendInfoBase, dispCRW);
  }
  v16 = FollowerQuestInfomationDraw__DispTotalDropItemCR(this, pos, v14);
  this->fields.dispCRW = v16;
  sub_1BCA784(&this->fields.dispCRW, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, this->fields.dispCRW, 0LL);
}


bool __fastcall FollowerQuestInfomationDraw__SetRestrictionDisp(
        FollowerQuestInfomationDraw_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsNullOrEmpty; // w19
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v9; // s0
  float v10; // s1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1133F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, restrictionMessage, method);
    byte_4B1133F = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(restrictionMessage, 0LL);
  if ( IsNullOrEmpty )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v12.fields.x = 1.0;
      v12.fields.y = 1.0;
      v12.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0LL);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return !IsNullOrEmpty;
      }
    }
LABEL_14:
    sub_1BCAA3C(restrictionMessageBase, v5);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  v10 = (float)this->fields.baseMessageWidth;
  if ( v9 <= v10 )
    v9 = (float)baseMessageWidth;
  v13.fields.x = v10 / v9;
  v13.fields.y = 1.0;
  v13.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v13, 0LL);
  return !IsNullOrEmpty;
}


bool __fastcall FollowerQuestInfomationDraw__SetTrendDisp(
        FollowerQuestInfomationDraw_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  ServantClassIconComponent_o *Instance; // x0
  __int64 v20; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x22
  struct QuestRestrictionInfo_o *v23; // x8
  QuestPhaseEntity_o *v24; // x21
  char v25; // w19
  System_String_o *RecommendLv_40198736; // x23
  bool IsNullOrEmpty; // w22
  __int64 v28; // x1
  Il2CppObject *Component_object; // x24
  __int64 v30; // x1
  float v31; // s0
  float v32; // s8
  struct UILabel_o *levelInfoLabel; // x8
  DataManager_o *v34; // x23
  int mWidth; // s8
  float lookup_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v39; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v41; // x9
  struct System_Int32_array *v42; // x8
  struct ServantClassIconComponent_array *v43; // x8
  unsigned __int64 v44; // x20
  unsigned __int64 v45; // x9
  struct System_Int32_array *v46; // x9
  unsigned __int64 v47; // x10
  struct QuestRestrictionInfo_o *v49; // x8

  if ( (byte_4B1133E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, classIds, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1133E = 1;
  }
  if ( !this->fields.questRestrictionInfo )
  {
    v24 = 0LL;
LABEL_14:
    RecommendLv_40198736 = 0LL;
    goto LABEL_15;
  }
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_85;
  if ( !Instance )
    goto LABEL_85;
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v23 = this->fields.questRestrictionInfo;
  if ( !v23 || !Instance )
    goto LABEL_85;
  v24 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v23->fields.questId, v23->fields.questPhase, 0LL);
  if ( !Entity )
    goto LABEL_14;
  if ( QuestEntity__GetTypeFlag(Entity, 0LL) != 128 )
  {
    v49 = this->fields.questRestrictionInfo;
    if ( v49 )
      RecommendLv_40198736 = QuestEntity__getRecommendLv_40198736(Entity, v49->fields.questPhase, 0LL);
    else
      RecommendLv_40198736 = Entity->fields.recommendLv;
LABEL_15:
    IsNullOrEmpty = System_String__IsNullOrEmpty(RecommendLv_40198736, 0LL);
    if ( IsNullOrEmpty )
    {
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoBase;
      if ( !Instance )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
      if ( !Instance )
        goto LABEL_85;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !classIds )
        goto LABEL_60;
LABEL_45:
      if ( *(_QWORD *)&classIds->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          classIconList = this->fields.classIconList;
          if ( classIconList )
          {
            v39 = 0LL;
            while ( 1 )
            {
              max_length = classIconList->max_length;
              if ( (__int64)v39 >= (int)max_length )
                goto LABEL_78;
              if ( v39 >= max_length )
                goto LABEL_86;
              v41 = classIds->max_length;
              Instance = classIconList->m_Items[v39];
              if ( (__int64)v39 >= (int)v41 )
                goto LABEL_56;
              if ( v39 >= v41 )
LABEL_86:
                sub_1BCAA44(Instance, v20);
              v20 = (unsigned int)classIds->m_Items[v39 + 1];
              if ( (int)v20 < 1 )
              {
LABEL_56:
                if ( !Instance )
                  goto LABEL_85;
                ServantClassIconComponent__Clear(Instance, 0LL);
              }
              else
              {
                if ( !Instance )
                  goto LABEL_85;
                ServantClassIconComponent__Set(Instance, v20, 0LL);
              }
              classIconList = this->fields.classIconList;
              ++v39;
              if ( !classIconList )
                goto LABEL_85;
            }
          }
        }
        goto LABEL_85;
      }
LABEL_60:
      if ( v24 && (v42 = v24->fields.classIds) != 0LL && *(_QWORD *)&v42->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          v43 = this->fields.classIconList;
          if ( v43 )
          {
            v44 = 0LL;
            while ( 1 )
            {
              v45 = v43->max_length;
              if ( (__int64)v44 >= (int)v45 )
                break;
              if ( v44 >= v45 )
                goto LABEL_86;
              v46 = v24->fields.classIds;
              if ( v46 )
              {
                v47 = v46->max_length;
                Instance = v43->m_Items[v44];
                if ( (__int64)v44 >= (int)v47 )
                  goto LABEL_74;
                if ( v44 >= v47 )
                  goto LABEL_86;
                v20 = (unsigned int)v46->m_Items[v44 + 1];
                if ( (int)v20 < 1 )
                {
LABEL_74:
                  if ( !Instance )
                    goto LABEL_85;
                  ServantClassIconComponent__Clear(Instance, 0LL);
                }
                else
                {
                  if ( !Instance )
                    goto LABEL_85;
                  ServantClassIconComponent__Set(Instance, v20, 0LL);
                }
                v43 = this->fields.classIconList;
                ++v44;
                if ( v43 )
                  continue;
              }
              goto LABEL_85;
            }
LABEL_78:
            v25 = 1;
            return v25 & 1;
          }
        }
      }
      else
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          v25 = !IsNullOrEmpty;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          return v25 & 1;
        }
      }
      goto LABEL_85;
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
    if ( !Instance )
      goto LABEL_85;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_85;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_object, 0LL);
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
      if ( Instance )
      {
        UILabel__set_text((UILabel_o *)Instance, RecommendLv_40198736, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
        Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_85;
          v31 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0LL);
          Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
          if ( !Instance )
            goto LABEL_85;
          v32 = (float)(SLODWORD(Instance[3].klass) / 2) + (float)(v31 * -0.5);
LABEL_44:
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v32, 0LL);
          if ( !classIds )
            goto LABEL_60;
          goto LABEL_45;
        }
        Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
        if ( Instance )
        {
          Instance = (ServantClassIconComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
          levelInfoLabel = this->fields.levelInfoLabel;
          if ( levelInfoLabel )
          {
            v34 = (DataManager_o *)Instance;
            mWidth = levelInfoLabel->fields.mWidth;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
            lookup_low = (float)mWidth;
            Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)v34,
                                                        0LL,
                                                        0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_85;
              if ( lookup_low > (float)SLODWORD(v34->fields.lookup) )
                lookup_low = (float)SLODWORD(v34->fields.lookup);
            }
            Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
            if ( Instance )
            {
              v32 = lookup_low * -0.5;
              goto LABEL_44;
            }
          }
        }
      }
    }
LABEL_85:
    sub_1BCAA3C(Instance, v20);
  }
  v25 = 0;
  return v25 & 1;
}


void __fastcall FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(
        FollowerQuestInfomationDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UIPanel_o *infomationPanel; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B1133D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1133D = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  infomationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
  if ( ((unsigned __int8)infomationPanel & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(infomationPanel, method);
  }
}


void __fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17___ctor(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__MoveNext(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct FollowerQuestInfomationDraw_o *_4__this; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *restrictionEntityList; // x21
  FollowerQuestInfomationDraw___c_c *v21; // x0
  System_Func_object__bool__o *_9__17_0; // x22
  Il2CppObject *v23; // x23
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_String_array *Messages_41169892; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  struct System_String_array *restrictionMessages_5__2; // x8
  int32_t max_length; // w9
  const MethodInfo *v31; // x2
  struct System_String_array *v32; // x8
  bool result; // w0
  int v34; // w8
  const MethodInfo *v35; // x2
  struct System_String_array *v36; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v39; // x0
  struct TweenAlpha_o **p_ta_5__4; // x21
  __int64 v41; // x1
  UnityEngine_Object_o *ta_5__4; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  UnityEngine_WaitForEndOfFrame_o *v45; // x21
  UnityEngine_GameObject_o *v46; // x0
  TweenAlpha_o *v47; // x0
  struct TweenAlpha_o **v48; // x21
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  UnityEngine_WaitForEndOfFrame_o *v53; // x21
  UnityEngine_WaitForEndOfFrame_o *v54; // x20
  Il2CppObject **v55; // x19
  int v56; // w8
  Il2CppObject *wait_5__6; // x1
  Il2CppObject **p__2__current; // x19
  Il2CppObject *v59; // x1

  v3 = this;
  if ( (byte_4B11342 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v4, v5);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__, v10, v11);
    sub_1BCA7E0(&FollowerQuestInfomationDraw___c_TypeInfo, v12, v13);
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1BCA7E0(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v14,
                                                                         v15);
    byte_4B11342 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_87;
      FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, method);
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
      if ( !this )
        goto LABEL_87;
      ((void (__fastcall *)(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( !this )
        goto LABEL_87;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                           (QuestRestrictionInfo_o *)this,
                                                                           0LL);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !questRestrictionInfo )
          goto LABEL_87;
        restrictionEntityList = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)questRestrictionInfo->fields.restrictionEntityList;
        if ( questRestrictionInfo->fields.isUniqueServant && questRestrictionInfo->fields.isUniqueIndividuality )
        {
          v21 = FollowerQuestInfomationDraw___c_TypeInfo;
          if ( !FollowerQuestInfomationDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerQuestInfomationDraw___c_TypeInfo, method);
            v21 = FollowerQuestInfomationDraw___c_TypeInfo;
          }
          _9__17_0 = (System_Func_object__bool__o *)v21->static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21, method);
              v21 = FollowerQuestInfomationDraw___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v21->static_fields->__9;
            _9__17_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                        method,
                                                        v17,
                                                        v18);
            System_Func_object__bool____ctor(
              _9__17_0,
              v23,
              Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__,
              0LL);
            static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            static_fields->__9__17_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__17_0;
            sub_1BCA784(&static_fields->__9__17_0, _9__17_0);
          }
          v25 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__17_0,
                  (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)System_Linq_Enumerable__ToArray_object_(
                                                                               v25,
                                                                               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          questRestrictionInfo = _4__this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_87;
          restrictionEntityList = this;
        }
        Messages_41169892 = QuestRestrictionInfo__GetMessages_41169892(
                              questRestrictionInfo,
                              (RestrictionEntity_array *)restrictionEntityList,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0LL);
      }
      else
      {
        if ( !questRestrictionInfo )
          goto LABEL_87;
        Messages_41169892 = QuestRestrictionInfo__GetMessages(
                              _4__this->fields.questRestrictionInfo,
                              v3->fields.pos,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0LL);
      }
      v3->fields._restrictionMessages_5__2 = Messages_41169892;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1BCA784(
                                                                           &v3->fields._restrictionMessages_5__2,
                                                                           Messages_41169892);
      restrictionMessages_5__2 = v3->fields._restrictionMessages_5__2;
      if ( !restrictionMessages_5__2 )
        goto LABEL_87;
      max_length = restrictionMessages_5__2->max_length;
      v3->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.trendInfoBase;
            _4__this->fields.dispNum = -1;
            if ( !this )
              goto LABEL_87;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          }
          return 0;
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
        _4__this->fields.dispNum = 0;
        if ( this )
        {
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v32 = v3->fields._restrictionMessages_5__2;
            if ( v32 )
            {
              if ( !v32->max_length )
LABEL_88:
                sub_1BCAA44(this, method);
              FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v32->m_Items[0], v31);
              return 0;
            }
          }
        }
LABEL_87:
        sub_1BCAA3C(this, method);
      }
      v3->fields._ta_5__4 = 0LL;
      this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1BCA784(&v3->fields._ta_5__4, 0LL);
      _4__this->fields.dispNum = v3->fields._restrictionCount_5__3 - 1;
      break;
    case 1:
      v3->fields.__1__state = -1;
      goto LABEL_63;
    case 2:
      v3->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._startTime_5__5) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_71;
      }
      else if ( _4__this )
      {
        goto LABEL_70;
      }
      goto LABEL_87;
    case 3:
      v3->fields.__1__state = -1;
      goto LABEL_78;
    default:
      return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( !_4__this )
          goto LABEL_87;
        FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, method);
        v34 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v34;
        if ( v34 >= v3->fields._restrictionCount_5__3 )
        {
          v34 = (unsigned __int8)_4__this->fields.isDispTrend << 31 >> 31;
          _4__this->fields.dispNum = v34;
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.trendInfoBase;
        if ( !this )
          goto LABEL_87;
        if ( (v34 & 0x80000000) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_87;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
          if ( !this )
            goto LABEL_87;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_87;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
          if ( !this )
            goto LABEL_87;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v36 = v3->fields._restrictionMessages_5__2;
          if ( !v36 )
            goto LABEL_87;
          dispNum = _4__this->fields.dispNum;
          if ( (unsigned int)dispNum >= v36->max_length )
            goto LABEL_88;
          FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v36->m_Items[dispNum], v35);
        }
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_87;
        if ( _4__this->fields.isClick )
        {
          ((void (__fastcall *)(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          _4__this->fields.isClick = 0;
          break;
        }
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v39 = TweenAlpha__Begin(gameObject, 0.5, 1.0, 0LL);
        v3->fields._ta_5__4 = v39;
        p_ta_5__4 = &v3->fields._ta_5__4;
        sub_1BCA784(&v3->fields._ta_5__4, v39);
        ta_5__4 = (UnityEngine_Object_o *)v3->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             ta_5__4,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_87;
          (*p_ta_5__4)->fields.method = 6;
          v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v43, v44);
          UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
          v3->fields._wait_5__6 = v45;
          sub_1BCA784(&v3->fields._wait_5__6, v45);
LABEL_63:
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v3->fields._ta_5__4;
          if ( !this )
            goto LABEL_87;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Behaviour__get_enabled(
                                                                               (UnityEngine_Behaviour_o *)this,
                                                                               0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !_4__this )
              goto LABEL_87;
            if ( !_4__this->fields.isClick )
            {
              wait_5__6 = (Il2CppObject *)v3->fields._wait_5__6;
              v3->fields.__2__current = wait_5__6;
              p__2__current = &v3->fields.__2__current;
              sub_1BCA784(p__2__current, wait_5__6);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
          v3->fields._wait_5__6 = 0LL;
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1BCA784(&v3->fields._wait_5__6, 0LL);
          if ( !_4__this )
            goto LABEL_87;
        }
      }
      while ( _4__this->fields.isClick );
      v3->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_70:
      if ( !_4__this->fields.isClick )
      {
        v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v27, v28);
        UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v54;
        v55 = &v3->fields.__2__current;
        sub_1BCA784(v55, v54);
        v56 = 2;
        goto LABEL_86;
      }
LABEL_71:
      if ( !_4__this->fields.isClick )
      {
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_87;
        v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v47 = TweenAlpha__Begin(v46, 0.5, 0.0, 0LL);
        v3->fields._ta_5__4 = v47;
        v48 = &v3->fields._ta_5__4;
        sub_1BCA784(&v3->fields._ta_5__4, v47);
        v50 = (UnityEngine_Object_o *)v3->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             v50,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v48 )
      goto LABEL_87;
    (*v48)->fields.method = 6;
    v53 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v51, v52);
    UnityEngine_WaitForEndOfFrame___ctor(v53, 0LL);
    v3->fields._wait_5__6 = v53;
    sub_1BCA784(&v3->fields._wait_5__6, v53);
LABEL_78:
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v3->fields._ta_5__4;
    if ( !this )
      goto LABEL_87;
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Behaviour__get_enabled(
                                                                         (UnityEngine_Behaviour_o *)this,
                                                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_87;
      if ( !_4__this->fields.isClick )
        break;
    }
    v3->fields._wait_5__6 = 0LL;
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1BCA784(&v3->fields._wait_5__6, 0LL);
  }
  v59 = (Il2CppObject *)v3->fields._wait_5__6;
  v3->fields.__2__current = v59;
  v55 = &v3->fields.__2__current;
  sub_1BCA784(v55, v59);
  v56 = 3;
LABEL_86:
  *((_DWORD *)v55 - 2) = v56;
  return 1;
}


Il2CppObject *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_IEnumerator_Reset(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_Collections_IEnumerator_get_Current(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17__System_IDisposable_Dispose(
        FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FollowerQuestInfomationDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11341 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerQuestInfomationDraw___c_TypeInfo, v1, v2);
    byte_4B11341 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FollowerQuestInfomationDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FollowerQuestInfomationDraw___c_TypeInfo->static_fields->__9 = (struct FollowerQuestInfomationDraw___c_o *)v4;
  sub_1BCA784(FollowerQuestInfomationDraw___c_TypeInfo->static_fields, v4);
}


void __fastcall FollowerQuestInfomationDraw___c___ctor(
        FollowerQuestInfomationDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FollowerQuestInfomationDraw___c___DispTotalDropItemCR_b__17_0(
        FollowerQuestInfomationDraw___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.type != 15;
}