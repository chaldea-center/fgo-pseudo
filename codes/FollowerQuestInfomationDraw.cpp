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
    sub_1B64324(this);
  this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth;
  UIWidget__set_width(restrictionMessageLabel, 1000, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall FollowerQuestInfomationDraw__DispTotalDropItemCR(
        FollowerQuestInfomationDraw_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A0074F & 1) == 0 )
  {
    sub_1B640C8(&FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos);
    byte_4A0074F = 1;
  }
  v5 = sub_1B64314(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = pos;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FollowerQuestInfomationDraw__OnClick(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A00753 & 1) == 0 )
  {
    sub_1B640C8(&Method_FollowerQuestInfomationDraw_OnClick__, method);
    byte_4A00753 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_FollowerQuestInfomationDraw_OnClick__;
    if ( (*((_BYTE *)Method_FollowerQuestInfomationDraw_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_FollowerQuestInfomationDraw_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *trendInfoBase; // x0
  const MethodInfo *v13; // x2
  bool v14; // w0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct System_Collections_IEnumerator_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    pos,
    (int32_t)classIds);
  dispCRW = this->fields.dispCRW;
  if ( dispCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCRW, 0LL);
    this->fields.dispCRW = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dispCRW, 0, v10, v11);
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
  v14 = FollowerQuestInfomationDraw__SetTrendDisp(this, classIds, v13);
  this->fields.isDispTrend = v14;
  if ( !v14 && (!*p_questRestrictionInfo || QuestRestrictionInfo__IsEmpty(*p_questRestrictionInfo, 0LL)) )
  {
    FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(this, v15);
    trendInfoBase = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
    if ( trendInfoBase )
    {
      ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))trendInfoBase->klass[1]._1.castClass)(
        trendInfoBase,
        trendInfoBase->klass[1]._1.declaringType,
        0.0);
      FollowerQuestInfomationDraw__SetRestrictionDisp(this, 0LL, v17);
      this->fields.isClick = 1;
      return;
    }
LABEL_12:
    sub_1B64324(trendInfoBase);
  }
  v18 = FollowerQuestInfomationDraw__DispTotalDropItemCR(this, pos, v16);
  this->fields.dispCRW = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dispCRW, (int32_t)v18, v19, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, this->fields.dispCRW, 0LL);
}


bool __fastcall FollowerQuestInfomationDraw__SetRestrictionDisp(
        FollowerQuestInfomationDraw_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w19
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00752 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, restrictionMessage);
    byte_4A00752 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(restrictionMessage, 0LL);
  if ( IsNullOrEmpty )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v11.fields.x = 1.0;
      v11.fields.y = 1.0;
      v11.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v11, 0LL);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return !IsNullOrEmpty;
      }
    }
LABEL_14:
    sub_1B64324(restrictionMessageBase);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  v9 = (float)this->fields.baseMessageWidth;
  if ( v8 <= v9 )
    v8 = (float)baseMessageWidth;
  v12.fields.x = v9 / v8;
  v12.fields.y = 1.0;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0LL);
  return !IsNullOrEmpty;
}


bool __fastcall FollowerQuestInfomationDraw__SetTrendDisp(
        FollowerQuestInfomationDraw_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantClassIconComponent_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestEntity_o *Entity; // x22
  struct QuestRestrictionInfo_o *v15; // x8
  QuestPhaseEntity_o *v16; // x21
  char v17; // w19
  System_String_o *RecommendLv_39148372; // x23
  bool IsNullOrEmpty; // w22
  Il2CppObject *Component_object; // x24
  float v21; // s0
  float v22; // s8
  struct UILabel_o *levelInfoLabel; // x8
  DataManager_o *v24; // x23
  int mWidth; // s8
  float lookup_low; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v30; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v32; // x9
  int32_t v33; // w1
  struct System_Int32_array *v34; // x8
  struct ServantClassIconComponent_array *v35; // x8
  unsigned __int64 v36; // x20
  unsigned __int64 v37; // x9
  struct System_Int32_array *v38; // x9
  unsigned __int64 v39; // x10
  int32_t v40; // w1
  struct QuestRestrictionInfo_o *v42; // x8

  if ( (byte_4A00751 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, classIds);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_4A00751 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
  {
    v16 = 0LL;
LABEL_14:
    RecommendLv_39148372 = 0LL;
    goto LABEL_15;
  }
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_85;
  if ( !Instance )
    goto LABEL_85;
  Entity = (QuestEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              questRestrictionInfo->fields.questId,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  Instance = (ServantClassIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (ServantClassIconComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v15 = this->fields.questRestrictionInfo;
  if ( !v15 || !Instance )
    goto LABEL_85;
  v16 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, v15->fields.questId, v15->fields.questPhase, 0LL);
  if ( !Entity )
    goto LABEL_14;
  if ( QuestEntity__GetTypeFlag(Entity, 0LL) != 128 )
  {
    v42 = this->fields.questRestrictionInfo;
    if ( v42 )
      RecommendLv_39148372 = QuestEntity__getRecommendLv_39148372(Entity, v42->fields.questPhase, 0LL);
    else
      RecommendLv_39148372 = Entity->fields.recommendLv;
LABEL_15:
    IsNullOrEmpty = System_String__IsNullOrEmpty(RecommendLv_39148372, 0LL);
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
            v30 = 0LL;
            while ( 1 )
            {
              max_length = classIconList->max_length;
              if ( (__int64)v30 >= (int)max_length )
                goto LABEL_78;
              if ( v30 >= max_length )
                goto LABEL_86;
              v32 = classIds->max_length;
              Instance = classIconList->m_Items[v30];
              if ( (__int64)v30 >= (int)v32 )
                goto LABEL_56;
              if ( v30 >= v32 )
LABEL_86:
                sub_1B6432C(Instance, v28);
              v33 = classIds->m_Items[v30 + 1];
              if ( v33 < 1 )
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
                ServantClassIconComponent__Set(Instance, v33, 0LL);
              }
              classIconList = this->fields.classIconList;
              ++v30;
              if ( !classIconList )
                goto LABEL_85;
            }
          }
        }
        goto LABEL_85;
      }
LABEL_60:
      if ( v16 && (v34 = v16->fields.classIds) != 0LL && *(_QWORD *)&v34->max_length )
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          v35 = this->fields.classIconList;
          if ( v35 )
          {
            v36 = 0LL;
            while ( 1 )
            {
              v37 = v35->max_length;
              if ( (__int64)v36 >= (int)v37 )
                break;
              if ( v36 >= v37 )
                goto LABEL_86;
              v38 = v16->fields.classIds;
              if ( v38 )
              {
                v39 = v38->max_length;
                Instance = v35->m_Items[v36];
                if ( (__int64)v36 >= (int)v39 )
                  goto LABEL_74;
                if ( v36 >= v39 )
                  goto LABEL_86;
                v40 = v38->m_Items[v36 + 1];
                if ( v40 < 1 )
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
                  ServantClassIconComponent__Set(Instance, v40, 0LL);
                }
                v35 = this->fields.classIconList;
                ++v36;
                if ( v35 )
                  continue;
              }
              goto LABEL_85;
            }
LABEL_78:
            v17 = 1;
            return v17 & 1;
          }
        }
      }
      else
      {
        Instance = (ServantClassIconComponent_o *)this->fields.classInfoBase;
        if ( Instance )
        {
          v17 = !IsNullOrEmpty;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          return v17 & 1;
        }
      }
      goto LABEL_85;
    }
    Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
    if ( !Instance )
      goto LABEL_85;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Instance,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        UILabel__set_text((UILabel_o *)Instance, RecommendLv_39148372, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                    (UnityEngine_Object_o *)Component_object,
                                                    0LL,
                                                    0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_85;
          v21 = CondensedScaleSprite__GetAfterAdjustWidth((CondensedScaleSprite_o *)Component_object, 0LL);
          Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
          if ( !Instance )
            goto LABEL_85;
          v22 = (float)(SLODWORD(Instance[3].klass) / 2) + (float)(v21 * -0.5);
LABEL_44:
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, v22, 0LL);
          if ( !classIds )
            goto LABEL_60;
          goto LABEL_45;
        }
        Instance = (ServantClassIconComponent_o *)this->fields.levelInfoLabel;
        if ( Instance )
        {
          Instance = (ServantClassIconComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
          levelInfoLabel = this->fields.levelInfoLabel;
          if ( levelInfoLabel )
          {
            v24 = (DataManager_o *)Instance;
            mWidth = levelInfoLabel->fields.mWidth;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            lookup_low = (float)mWidth;
            Instance = (ServantClassIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                        (UnityEngine_Object_o *)v24,
                                                        0LL,
                                                        0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_85;
              if ( lookup_low > (float)SLODWORD(v24->fields.lookup) )
                lookup_low = (float)SLODWORD(v24->fields.lookup);
            }
            Instance = (ServantClassIconComponent_o *)this->fields.levelInfoSprite;
            if ( Instance )
            {
              v22 = lookup_low * -0.5;
              goto LABEL_44;
            }
          }
        }
      }
    }
LABEL_85:
    sub_1B64324(Instance);
  }
  v17 = 0;
  return v17 & 1;
}


void __fastcall FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(
        FollowerQuestInfomationDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *infomationPanel; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4A00750 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A00750 = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B64324(infomationPanel);
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
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct FollowerQuestInfomationDraw_o *_4__this; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *restrictionEntityList; // x21
  FollowerQuestInfomationDraw___c_c *v14; // x0
  System_Func_object__bool__o *_9__17_0; // x22
  Il2CppObject *v16; // x23
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_String_array *Messages_40097968; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_String_array *restrictionMessages_5__2; // x8
  int32_t max_length; // w9
  __int64 v30; // x1
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
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Object_o *ta_5__4; // x22
  __int64 v44; // x2
  UnityEngine_WaitForEndOfFrame_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  UnityEngine_GameObject_o *v50; // x0
  TweenAlpha_o *v51; // x0
  struct TweenAlpha_o **v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  UnityEngine_Object_o *v55; // x22
  __int64 v56; // x2
  UnityEngine_WaitForEndOfFrame_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  ServantStatusBattleListViewItem_o *v63; // x19
  int32_t v64; // w2
  int32_t v65; // w3
  int v66; // w8
  Il2CppObject *wait_5__6; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  Il2CppObject *v69; // x1

  v2 = this;
  if ( (byte_4A00755 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v3);
    sub_1B640C8(&System_Func_RestrictionEntity__bool__TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__, v6);
    sub_1B640C8(&FollowerQuestInfomationDraw___c_TypeInfo, v7);
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)sub_1B640C8(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v8);
    byte_4A00755 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
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
          v14 = FollowerQuestInfomationDraw___c_TypeInfo;
          if ( !FollowerQuestInfomationDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerQuestInfomationDraw___c_TypeInfo);
            v14 = FollowerQuestInfomationDraw___c_TypeInfo;
          }
          _9__17_0 = (System_Func_object__bool__o *)v14->static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( !v14->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v14);
              v14 = FollowerQuestInfomationDraw___c_TypeInfo;
            }
            v16 = (Il2CppObject *)v14->static_fields->__9;
            _9__17_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                        v10,
                                                        v11);
            System_Func_object__bool____ctor(
              _9__17_0,
              v16,
              Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__,
              0LL);
            static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            static_fields->__9__17_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__17_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v18, v19);
          }
          v20 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__17_0,
                  (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)System_Linq_Enumerable__ToArray_object_(
                                                                               v20,
                                                                               (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          questRestrictionInfo = _4__this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_87;
          restrictionEntityList = this;
        }
        Messages_40097968 = QuestRestrictionInfo__GetMessages_40097968(
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
        Messages_40097968 = QuestRestrictionInfo__GetMessages(
                              _4__this->fields.questRestrictionInfo,
                              v2->fields.pos,
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
      v2->fields._restrictionMessages_5__2 = Messages_40097968;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v2->fields._restrictionMessages_5__2,
        (int32_t)Messages_40097968,
        v22,
        v23);
      restrictionMessages_5__2 = v2->fields._restrictionMessages_5__2;
      if ( !restrictionMessages_5__2 )
        goto LABEL_87;
      max_length = restrictionMessages_5__2->max_length;
      v2->fields._restrictionCount_5__3 = max_length;
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
            v32 = v2->fields._restrictionMessages_5__2;
            if ( v32 )
            {
              if ( !v32->max_length )
LABEL_88:
                sub_1B6432C(this, v30);
              FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v32->m_Items[0], v31);
              return 0;
            }
          }
        }
LABEL_87:
        sub_1B64324(this);
      }
      v2->fields._ta_5__4 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__4, 0, v26, v27);
      _4__this->fields.dispNum = v2->fields._restrictionCount_5__3 - 1;
      break;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_63;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._startTime_5__5) >= 3.0 )
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
      v2->fields.__1__state = -1;
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
        FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, v24);
        v34 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v34;
        if ( v34 >= v2->fields._restrictionCount_5__3 )
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
          v36 = v2->fields._restrictionMessages_5__2;
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
        v2->fields._ta_5__4 = v39;
        p_ta_5__4 = &v2->fields._ta_5__4;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__4, (int32_t)v39, v41, v42);
        ta_5__4 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             ta_5__4,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_87;
          (*p_ta_5__4)->fields.method = 6;
          v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v24, v44);
          UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
          v2->fields._wait_5__6 = v45;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, (int32_t)v45, v46, v47);
LABEL_63:
          this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v2->fields._ta_5__4;
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
              wait_5__6 = (Il2CppObject *)v2->fields._wait_5__6;
              v2->fields.__2__current = wait_5__6;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B6406C(p__2__current, (int32_t)wait_5__6, v48, v49);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
          v2->fields._wait_5__6 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, 0, v48, v49);
          if ( !_4__this )
            goto LABEL_87;
        }
      }
      while ( _4__this->fields.isClick );
      v2->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_70:
      if ( !_4__this->fields.isClick )
      {
        v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v24, v25);
        UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v62;
        v63 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(v63, (int32_t)v62, v64, v65);
        v66 = 2;
        goto LABEL_86;
      }
LABEL_71:
      if ( !_4__this->fields.isClick )
      {
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_87;
        v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v51 = TweenAlpha__Begin(v50, 0.5, 0.0, 0LL);
        v2->fields._ta_5__4 = v51;
        v52 = &v2->fields._ta_5__4;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__4, (int32_t)v51, v53, v54);
        v55 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                             v55,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v52 )
      goto LABEL_87;
    (*v52)->fields.method = 6;
    v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v24, v56);
    UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
    v2->fields._wait_5__6 = v57;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, (int32_t)v57, v58, v59);
LABEL_78:
    this = (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v2->fields._ta_5__4;
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
    v2->fields._wait_5__6 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, 0, v60, v61);
  }
  v69 = (Il2CppObject *)v2->fields._wait_5__6;
  v2->fields.__2__current = v69;
  v63 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v63, (int32_t)v69, v60, v61);
  v66 = 3;
LABEL_86:
  *(_DWORD *)&v63[-1].fields.isMine = v66;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A00754 & 1) == 0 )
  {
    sub_1B640C8(&FollowerQuestInfomationDraw___c_TypeInfo, v1);
    byte_4A00754 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FollowerQuestInfomationDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FollowerQuestInfomationDraw___c_TypeInfo->static_fields->__9 = (struct FollowerQuestInfomationDraw___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)FollowerQuestInfomationDraw___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.type != 15;
}