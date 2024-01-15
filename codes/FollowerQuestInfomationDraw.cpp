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
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8ED7 & 1) == 0 )
  {
    sub_B16FFC(&FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos);
    byte_40F8ED7 = 1;
  }
  v7 = sub_B170CC(FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_TypeInfo, *(_QWORD *)&pos, method, v3, v4);
  FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17___ctor(
    (FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = pos;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall FollowerQuestInfomationDraw__OnClick(FollowerQuestInfomationDraw_o *this, const MethodInfo *method)
{
  if ( (byte_40F8EDB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8EDB = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerQuestInfomationDraw__SetInfomation(
        FollowerQuestInfomationDraw_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t pos,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_Collections_IEnumerator_o *dispCRW; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *trendInfoBase; // x0
  UnityEngine_Component_o *restrictionMessageBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x2
  bool v23; // w0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct UIPanel_o *infomationPanel; // x0
  const MethodInfo *v27; // x2
  struct System_Collections_IEnumerator_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    *(System_String_array ***)&pos,
    (System_String_array **)classIds,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  dispCRW = this->fields.dispCRW;
  if ( dispCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCRW, 0LL);
    this->fields.dispCRW = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.dispCRW, 0LL, v13, v14, v15, v16, v17, v18);
  }
  trendInfoBase = this->fields.trendInfoBase;
  if ( !trendInfoBase )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(trendInfoBase, 0, 0LL);
  restrictionMessageBase = (UnityEngine_Component_o *)this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(restrictionMessageBase, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v23 = FollowerQuestInfomationDraw__SetTrendDisp(this, classIds, v22);
  this->fields.isDispTrend = v23;
  if ( !v23 && (!*p_questRestrictionInfo || QuestRestrictionInfo__IsEmpty(*p_questRestrictionInfo, 0LL)) )
  {
    FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(this, v24);
    infomationPanel = this->fields.infomationPanel;
    if ( infomationPanel )
    {
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))infomationPanel->klass->vtable._8_set_alpha.method)(
        infomationPanel,
        infomationPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.0);
      FollowerQuestInfomationDraw__SetRestrictionDisp(this, 0LL, v27);
      this->fields.isClick = 1;
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  v28 = FollowerQuestInfomationDraw__DispTotalDropItemCR(this, pos, v25);
  this->fields.dispCRW = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dispCRW,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, this->fields.dispCRW, 0LL);
}


bool __fastcall FollowerQuestInfomationDraw__SetRestrictionDisp(
        FollowerQuestInfomationDraw_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  UILabel_o *restrictionMessageLabel; // x0
  UILabel_o *v8; // x0
  int32_t baseMessageWidth; // s8
  UILabel_o *v10; // x0
  float v11; // s0
  UnityEngine_Transform_o *v12; // x0
  float v13; // s1
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8EDA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, restrictionMessage);
    byte_40F8EDA = 1;
  }
  if ( System_String__IsNullOrEmpty(restrictionMessage, 0LL) )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v14.fields.x = 1.0;
      v14.fields.y = 1.0;
      v14.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v14, 0LL);
      restrictionMessageLabel = this->fields.restrictionMessageLabel;
      if ( restrictionMessageLabel )
      {
        UILabel__set_text(restrictionMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return 0;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  v8 = this->fields.restrictionMessageLabel;
  if ( !v8 )
    goto LABEL_13;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text(v8, restrictionMessage, 0LL);
  v10 = this->fields.restrictionMessageLabel;
  if ( !v10 )
    goto LABEL_13;
  LODWORD(v11) = *(_QWORD *)&UILabel__get_printedSize(v10, 0LL);
  v12 = this->fields.restrictionMessageBase;
  if ( !v12 )
    goto LABEL_13;
  v13 = (float)this->fields.baseMessageWidth;
  if ( v11 <= v13 )
    v11 = (float)baseMessageWidth;
  v15.fields.x = v13 / v11;
  v15.fields.y = 1.0;
  v15.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(v12, v15, 0LL);
  return 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_String_o *Entity; // x22
  WebViewManager_o *v13; // x0
  QuestPhaseMaster_o *v14; // x0
  struct QuestRestrictionInfo_o *v15; // x8
  QuestPhaseEntity_o *v16; // x21
  bool v17; // w22
  struct QuestRestrictionInfo_o *v18; // x8
  bool IsNullOrEmpty; // w0
  UILabel_o *levelInfoLabel; // x0
  UILabel_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UILabel_o *v25; // x0
  float v26; // s8
  float v27; // s0
  struct UILabel_o *v28; // x8
  UnityEngine_Transform_o *levelInfoTrans; // x0
  UnityEngine_GameObject_o *classInfoBase; // x0
  ServantClassIconComponent_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v35; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v37; // x9
  int32_t v38; // w1
  struct System_Int32_array *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  struct ServantClassIconComponent_array *v41; // x8
  unsigned __int64 v42; // x20
  unsigned __int64 v43; // x9
  struct System_Int32_array *v44; // x9
  unsigned __int64 v45; // x10
  int32_t v46; // w1
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8ED9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, classIds);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F8ED9 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
  {
    v16 = 0LL;
    Entity = 0LL;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_66;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Entity = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                questRestrictionInfo->fields.questId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_66;
  v14 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v13,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  v15 = this->fields.questRestrictionInfo;
  if ( !v15 || !v14 )
    goto LABEL_66;
  v16 = QuestPhaseMaster__GetEntity(v14, v15->fields.questId, v15->fields.questPhase, 0LL);
  if ( !Entity )
  {
LABEL_17:
    IsNullOrEmpty = System_String__IsNullOrEmpty(Entity, 0LL);
    if ( !this->fields.levelInfoBase )
      goto LABEL_66;
    if ( IsNullOrEmpty )
    {
      UnityEngine_GameObject__SetActive(this->fields.levelInfoBase, 0, 0LL);
      levelInfoLabel = this->fields.levelInfoLabel;
      if ( !levelInfoLabel )
        goto LABEL_66;
      UILabel__set_text(levelInfoLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v17 = 0;
      if ( !classIds )
        goto LABEL_44;
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.levelInfoBase, 1, 0LL);
      v21 = this->fields.levelInfoLabel;
      if ( !v21 )
        goto LABEL_66;
      UILabel__set_text(v21, Entity, 0LL);
      v22 = (UnityEngine_Component_o *)this->fields.levelInfoLabel;
      if ( !v22 )
        goto LABEL_66;
      transform = UnityEngine_Component__get_transform(v22, 0LL);
      if ( !transform )
        goto LABEL_66;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
      v25 = this->fields.levelInfoLabel;
      if ( !v25 )
        goto LABEL_66;
      v26 = *(float *)&localPosition;
      LODWORD(v27) = *(_QWORD *)&UILabel__get_printedSize(v25, 0LL);
      v28 = this->fields.levelInfoLabel;
      if ( !v28 )
        goto LABEL_66;
      levelInfoTrans = this->fields.levelInfoTrans;
      if ( !levelInfoTrans )
        goto LABEL_66;
      v49.fields.z = 0.0;
      v49.fields.x = (float)((float)(v26 + v27) + (float)(v28->fields.mFontSize / 2)) * -0.5;
      v49.fields.y = 0.0;
      UnityEngine_Transform__set_localPosition(levelInfoTrans, v49, 0LL);
      v17 = 1;
      if ( !classIds )
        goto LABEL_44;
    }
    if ( *(_QWORD *)&classIds->max_length )
    {
      classInfoBase = this->fields.classInfoBase;
      if ( classInfoBase )
      {
        UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v35 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v35 >= (int)max_length )
              return 1;
            if ( v35 >= max_length )
              goto LABEL_67;
            v37 = classIds->max_length;
            v31 = classIconList->m_Items[v35];
            if ( (__int64)v35 >= (int)v37 )
              goto LABEL_40;
            if ( v35 >= v37 )
            {
LABEL_67:
              sub_B17100(v31, v32, v33);
              sub_B170A0();
            }
            v38 = classIds->m_Items[v35 + 1];
            if ( v38 < 1 )
            {
LABEL_40:
              if ( !v31 )
                break;
              ServantClassIconComponent__Clear(v31, 0LL);
            }
            else
            {
              if ( !v31 )
                break;
              ServantClassIconComponent__Set(v31, v38, 0LL);
            }
            classIconList = this->fields.classIconList;
            ++v35;
          }
          while ( classIconList );
        }
      }
LABEL_66:
      sub_B170D4();
    }
LABEL_44:
    if ( v16 && (v39 = v16->fields.classIds) != 0LL && *(_QWORD *)&v39->max_length )
    {
      v40 = this->fields.classInfoBase;
      if ( v40 )
      {
        UnityEngine_GameObject__SetActive(v40, 1, 0LL);
        v41 = this->fields.classIconList;
        if ( v41 )
        {
          v42 = 0LL;
          while ( 1 )
          {
            v43 = v41->max_length;
            if ( (__int64)v42 >= (int)v43 )
              return 1;
            if ( v42 >= v43 )
              goto LABEL_67;
            v44 = v16->fields.classIds;
            if ( v44 )
            {
              v45 = v44->max_length;
              v31 = v41->m_Items[v42];
              if ( (__int64)v42 >= (int)v45 )
                goto LABEL_58;
              if ( v42 >= v45 )
                goto LABEL_67;
              v46 = v44->m_Items[v42 + 1];
              if ( v46 < 1 )
              {
LABEL_58:
                if ( !v31 )
                  goto LABEL_66;
                ServantClassIconComponent__Clear(v31, 0LL);
              }
              else
              {
                if ( !v31 )
                  goto LABEL_66;
                ServantClassIconComponent__Set(v31, v46, 0LL);
              }
              v41 = this->fields.classIconList;
              ++v42;
              if ( v41 )
                continue;
            }
            goto LABEL_66;
          }
        }
      }
    }
    else
    {
      v47 = this->fields.classInfoBase;
      if ( v47 )
      {
        UnityEngine_GameObject__SetActive(v47, 0, 0LL);
        return v17;
      }
    }
    goto LABEL_66;
  }
  if ( QuestEntity__GetTypeFlag((QuestEntity_o *)Entity, 0LL) != 128 )
  {
    v18 = this->fields.questRestrictionInfo;
    if ( v18 )
      Entity = QuestEntity__getRecommendLv_23921272((QuestEntity_o *)Entity, v18->fields.questPhase, 0LL);
    else
      Entity = (System_String_o *)Entity[5].monitor;
    goto LABEL_17;
  }
  return 0;
}


void __fastcall FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(
        FollowerQuestInfomationDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *infomationPanel; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x19

  if ( (byte_40F8ED8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8ED8 = 1;
  }
  infomationPanel = (UnityEngine_Component_o *)this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         infomationPanel,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      if ( UnityEngine_Behaviour__get_enabled(Component_WebViewObject, 0LL) )
        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct FollowerQuestInfomationDraw_o *_4__this; // x20
  struct UIPanel_o *infomationPanel; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsUseOldMaster; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  QuestRestrictionInfo_o *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  FollowerQuestInfomationDraw___c_c *v20; // x0
  struct FollowerQuestInfomationDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__17_0; // x22
  Il2CppObject *v23; // x23
  struct FollowerQuestInfomationDraw___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v32; // x0
  struct System_String_array *Messages_31240276; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_String_array **p_restrictionMessages_5__2; // x21
  UnityEngine_Behaviour_o **p_ta_5__4; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  UnityEngine_Behaviour_o **v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t max_length; // w9
  UnityEngine_Component_o *restrictionMessageBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  struct System_String_array *v59; // x8
  UnityEngine_GameObject_o *trendInfoBase; // x0
  bool result; // w0
  int v62; // w8
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_Component_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  struct TweenAlpha_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *ta_5__4; // x22
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  UnityEngine_WaitForEndOfFrame_o *v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  UnityEngine_Component_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  struct TweenAlpha_o *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  UnityEngine_Object_o *v106; // x22
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  UnityEngine_WaitForEndOfFrame_o *v111; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  UnityEngine_WaitForEndOfFrame_o *v124; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  Il2CppObject *wait_5__6; // x1
  Il2CppObject *v133; // x1

  if ( (byte_40F68BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v3);
    sub_B16FFC(&Method_System_Func_RestrictionEntity__bool___ctor__, v4);
    sub_B16FFC(&System_Func_RestrictionEntity__bool__TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__, v7);
    sub_B16FFC(&FollowerQuestInfomationDraw___c_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    byte_40F68BD = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_91;
      FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, 0LL);
      infomationPanel = _4__this->fields.infomationPanel;
      if ( !infomationPanel )
        goto LABEL_91;
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))infomationPanel->klass->vtable._8_set_alpha.method)(
        infomationPanel,
        infomationPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( !questRestrictionInfo )
        goto LABEL_91;
      IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
      v18 = _4__this->fields.questRestrictionInfo;
      if ( IsUseOldMaster )
      {
        if ( !v18 )
          goto LABEL_91;
        restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v18->fields.restrictionEntityList;
        if ( v18->fields.isUniqueServant && v18->fields.isUniqueIndividuality )
        {
          v20 = FollowerQuestInfomationDraw___c_TypeInfo;
          if ( (BYTE3(FollowerQuestInfomationDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerQuestInfomationDraw___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerQuestInfomationDraw___c_TypeInfo);
            v20 = FollowerQuestInfomationDraw___c_TypeInfo;
          }
          static_fields = v20->static_fields;
          _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__17_0;
          if ( !_9__17_0 )
          {
            if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              static_fields = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            }
            v23 = (Il2CppObject *)static_fields->__9;
            _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                            System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                            v14,
                                                                                            v15,
                                                                                            v16,
                                                                                            v17);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              _9__17_0,
              v23,
              Method_FollowerQuestInfomationDraw___c__DispTotalDropItemCR_b__17_0__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
            v24 = FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
            v24->__9__17_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__17_0;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v24->__9__17_0,
              (System_Int32_array **)_9__17_0,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
          }
          v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                  restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__17_0,
                  (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          v32 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                  v31,
                  (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          v18 = _4__this->fields.questRestrictionInfo;
          if ( !v18 )
            goto LABEL_91;
          restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
        }
        Messages_31240276 = QuestRestrictionInfo__GetMessages_31240276(
                              v18,
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
        this->fields._restrictionMessages_5__2 = Messages_31240276;
        p_restrictionMessages_5__2 = &this->fields._restrictionMessages_5__2;
      }
      else
      {
        if ( !v18 )
          goto LABEL_91;
        Messages_31240276 = QuestRestrictionInfo__GetMessages(
                              _4__this->fields.questRestrictionInfo,
                              this->fields.pos,
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
        p_restrictionMessages_5__2 = &this->fields._restrictionMessages_5__2;
        this->fields._restrictionMessages_5__2 = Messages_31240276;
      }
      sub_B16F98(
        (BattleServantConfConponent_o *)p_restrictionMessages_5__2,
        (System_Int32_array **)Messages_31240276,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      if ( !*p_restrictionMessages_5__2 )
        goto LABEL_91;
      max_length = (*p_restrictionMessages_5__2)->max_length;
      this->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            trendInfoBase = _4__this->fields.trendInfoBase;
            _4__this->fields.dispNum = -1;
            if ( !trendInfoBase )
              goto LABEL_91;
            UnityEngine_GameObject__SetActive(trendInfoBase, 1, 0LL);
          }
          return 0;
        }
        restrictionMessageBase = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
        _4__this->fields.dispNum = 0;
        if ( restrictionMessageBase )
        {
          gameObject = UnityEngine_Component__get_gameObject(restrictionMessageBase, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            v59 = *p_restrictionMessages_5__2;
            if ( *p_restrictionMessages_5__2 )
            {
              if ( !v59->max_length )
              {
LABEL_92:
                sub_B17100(v56, v57, v58);
                sub_B170A0();
              }
              FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, v59->m_Items[0], 0LL);
              return 0;
            }
          }
        }
LABEL_91:
        sub_B170D4();
      }
      this->fields._ta_5__4 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._ta_5__4, 0LL, v47, v48, v49, v50, v51, v52);
      _4__this->fields.dispNum = this->fields._restrictionCount_5__3 - 1;
      break;
    case 1:
      p_ta_5__4 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
      this->fields.__1__state = -1;
      goto LABEL_66;
    case 2:
      this->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields._startTime_5__5) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_74;
      }
      else if ( _4__this )
      {
        goto LABEL_73;
      }
      goto LABEL_91;
    case 3:
      v46 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
      this->fields.__1__state = -1;
      goto LABEL_82;
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
          goto LABEL_91;
        FollowerQuestInfomationDraw__StopTotalDropItemtweenAlpha(_4__this, 0LL);
        v62 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v62;
        if ( v62 >= this->fields._restrictionCount_5__3 )
        {
          v62 = (unsigned __int8)_4__this->fields.isDispTrend << 31 >> 31;
          _4__this->fields.dispNum = v62;
        }
        v63 = _4__this->fields.trendInfoBase;
        if ( !v63 )
          goto LABEL_91;
        if ( (v62 & 0x80000000) != 0 )
        {
          UnityEngine_GameObject__SetActive(v63, 1, 0LL);
          v68 = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
          if ( !v68 )
            goto LABEL_91;
          v69 = UnityEngine_Component__get_gameObject(v68, 0LL);
          if ( !v69 )
            goto LABEL_91;
          UnityEngine_GameObject__SetActive(v69, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive(v63, 0, 0LL);
          v64 = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
          if ( !v64 )
            goto LABEL_91;
          v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
          if ( !v65 )
            goto LABEL_91;
          UnityEngine_GameObject__SetActive(v65, 1, 0LL);
          restrictionMessages_5__2 = this->fields._restrictionMessages_5__2;
          if ( !restrictionMessages_5__2 )
            goto LABEL_91;
          dispNum = _4__this->fields.dispNum;
          if ( (unsigned int)dispNum >= restrictionMessages_5__2->max_length )
            goto LABEL_92;
          FollowerQuestInfomationDraw__SetRestrictionDisp(_4__this, restrictionMessages_5__2->m_Items[dispNum], 0LL);
        }
        v70 = (UnityEngine_Component_o *)_4__this->fields.infomationPanel;
        if ( !v70 )
          goto LABEL_91;
        if ( _4__this->fields.isClick )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v70->klass[1]._1.castClass)(
            v70,
            v70->klass[1]._1.declaringType,
            1.0);
          _4__this->fields.isClick = 0;
          break;
        }
        v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
        v72 = TweenAlpha__Begin(v71, 0.5, 1.0, 0LL);
        this->fields._ta_5__4 = v72;
        p_ta_5__4 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._ta_5__4,
          (System_Int32_array **)v72,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        ta_5__4 = (UnityEngine_Object_o *)this->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(ta_5__4, 0LL, 0LL) )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_91;
          LODWORD((*p_ta_5__4)[1].klass) = 6;
          v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                     UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                     v80,
                                                     v81,
                                                     v82,
                                                     v83);
          UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
          this->fields._wait_5__6 = v84;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._wait_5__6,
            (System_Int32_array **)v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
LABEL_66:
          if ( !*p_ta_5__4 )
            goto LABEL_91;
          if ( UnityEngine_Behaviour__get_enabled(*p_ta_5__4, 0LL) )
          {
            if ( !_4__this )
              goto LABEL_91;
            if ( !_4__this->fields.isClick )
            {
              wait_5__6 = (Il2CppObject *)this->fields._wait_5__6;
              this->fields.__2__current = wait_5__6;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.__2__current,
                (System_Int32_array **)wait_5__6,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96);
              result = 1;
              this->fields.__1__state = 1;
              return result;
            }
          }
          this->fields._wait_5__6 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__6, 0LL, v91, v92, v93, v94, v95, v96);
          if ( !_4__this )
            goto LABEL_91;
        }
      }
      while ( _4__this->fields.isClick );
      this->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_73:
      if ( !_4__this->fields.isClick )
      {
        v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v42, v43, v44, v45);
        UnityEngine_WaitForEndOfFrame___ctor(v124, 0LL);
        this->fields.__2__current = (Il2CppObject *)v124;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v124,
          v126,
          v127,
          v128,
          v129,
          v130,
          v131);
        *((_DWORD *)p__2__current - 2) = 2;
        return 1;
      }
LABEL_74:
      if ( !_4__this->fields.isClick )
      {
        v97 = (UnityEngine_Component_o *)_4__this->fields.infomationPanel;
        if ( !v97 )
          goto LABEL_91;
        v98 = UnityEngine_Component__get_gameObject(v97, 0LL);
        v99 = TweenAlpha__Begin(v98, 0.5, 0.0, 0LL);
        this->fields._ta_5__4 = v99;
        v46 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._ta_5__4,
          (System_Int32_array **)v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
        v106 = (UnityEngine_Object_o *)this->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
          break;
      }
    }
    if ( !*v46 )
      goto LABEL_91;
    LODWORD((*v46)[1].klass) = 6;
    v111 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v107, v108, v109, v110);
    UnityEngine_WaitForEndOfFrame___ctor(v111, 0LL);
    this->fields._wait_5__6 = v111;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._wait_5__6,
      (System_Int32_array **)v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
LABEL_82:
    if ( !*v46 )
      goto LABEL_91;
    if ( UnityEngine_Behaviour__get_enabled(*v46, 0LL) )
    {
      if ( !_4__this )
        goto LABEL_91;
      if ( !_4__this->fields.isClick )
        break;
    }
    this->fields._wait_5__6 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__6, 0LL, v118, v119, v120, v121, v122, v123);
  }
  v133 = (Il2CppObject *)this->fields._wait_5__6;
  this->fields.__2__current = v133;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v133,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.__1__state = 3;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_FollowerQuestInfomationDraw__DispTotalDropItemCR_d__17_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68BC & 1) == 0 )
  {
    sub_B16FFC(&FollowerQuestInfomationDraw___c_TypeInfo, v1);
    byte_40F68BC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(FollowerQuestInfomationDraw___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)FollowerQuestInfomationDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.type != 15;
}