void DebugInputSkillChangeComponent___ctor(DebugInputSkillChangeComponent_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isFirstOpen = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputSkillChangeComponent__Close(DebugInputSkillChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.debugMenu) == 0) )
    sub_1C942F0(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void DebugInputSkillChangeComponent__DecideSkillChange(
        DebugInputSkillChangeComponent_o *this,
        const MethodInfo *method)
{
  UIInput_o *skillIdInput; // x0
  System_String_o *value; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x1
  struct BattleLogic_o *battleLogic; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4D2DE90 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DE90 = 1;
  }
  entity = 0;
  *(_QWORD *)result = 0;
  skillIdInput = this->fields.skillIdInput;
  if ( !skillIdInput )
    goto LABEL_20;
  value = UIInput__get_value(skillIdInput, 0);
  if ( !System_Int32__TryParse(value, &result[1], 0) )
    result[1] = 1000;
  skillIdInput = this->fields.skillLvInput;
  if ( !skillIdInput )
    goto LABEL_20;
  v5 = UIInput__get_value(skillIdInput, 0);
  if ( !System_Int32__TryParse(v5, result, 0) )
    result[0] = 1;
  skillIdInput = (UIInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillIdInput )
    goto LABEL_20;
  skillIdInput = (UIInput_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)skillIdInput,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillIdInput )
    goto LABEL_20;
  if ( !SkillLvMaster__GetEntity((SkillLvMaster_o *)skillIdInput, result[1], result[0], 0) )
    return;
  skillIdInput = (UIInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillIdInput )
    goto LABEL_20;
  skillIdInput = (UIInput_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)skillIdInput,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillIdInput )
    goto LABEL_20;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)skillIdInput,
          &entity,
          result[1],
          (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  skillIdInput = (UIInput_o *)DebugInputSkillChangeComponent__getTargetServantDataArray(this, v6);
  if ( !skillIdInput
    || (battleLogic = this->fields.battleLogic) == 0
    || (skillIdInput = (UIInput_o *)battleLogic->fields.perf) == 0 )
  {
LABEL_20:
    sub_1C942F0(skillIdInput, method);
  }
  BattlePerformance__updateStatus((BattlePerformance_o *)skillIdInput, 0);
}


void DebugInputSkillChangeComponent__DecideSkillIdInput(
        DebugInputSkillChangeComponent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  SkillEntity_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v10; // w22
  Il2CppObject *v11; // x21
  System_String_o *Name; // x0
  const MethodInfo *v13; // x4
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2DE8D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_SkillDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2DE8D = 1;
  }
  result = 0;
  if ( System_Int32__TryParse(value, &result, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_12;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               result,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !Entity )
      return;
    v8 = (SkillEntity_o *)Entity;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillDetailMaster___)) == 0 )
    {
LABEL_12:
      sub_1C942F0(Instance, v6);
    }
    v9 = DataMasterBase_object__object__int___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           result,
           (const MethodInfo_345B4C0 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__GetEntity__);
    if ( v9 )
    {
      v10 = result;
      v11 = v9;
      Name = SkillEntity__getName(v8, 0);
      DebugInputSkillChangeComponent__SelectSkill(this, v10, Name, (System_String_o *)v11[1].monitor, v13);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugInputSkillChangeComponent__Open(
        DebugInputSkillChangeComponent_o *this,
        BattleLogic_o *logic,
        BattleData_o *data,
        UnityEngine_GameObject_o *menu,
        bool isPlayerChange,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool v12; // w23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct UnityEngine_GameObject_o **p_debugMenu; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  System_String_o *value; // x0
  const MethodInfo *v29; // x2
  _BOOL4 v30; // w10
  UILabel_o *targetServantTitle; // x19
  Il2CppObject **v32; // x8

  v12 = isPlayerChange;
  if ( (byte_4D2DE8C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_25688/*"プレイヤー"*/);
    sub_1C94098(&StringLiteral_25655/*"エネミー"*/);
    sub_1C94098(&StringLiteral_25395/*"{0}(対象選択)"*/);
    byte_4D2DE8C = 1;
  }
  this->fields.battleLogic = logic;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleLogic,
    (int32_t)logic,
    (int32_t)data,
    (int32_t)menu,
    (System_String_o *)isPlayerChange,
    (int32_t)method,
    v6,
    v7);
  this->fields.battleData = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.battleData, (int32_t)data, v13, v14, v15, v16, v17, v18);
  this->fields.debugMenu = menu;
  p_debugMenu = &this->fields.debugMenu;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.debugMenu, (int32_t)menu, v20, v21, v22, v23, v24, v25);
  this->fields.isPlayerChange = v12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = *p_debugMenu;
  if ( !*p_debugMenu )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  if ( this->fields.isFirstOpen )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    this->fields.isFirstOpen = 0;
    if ( !gameObject )
      goto LABEL_14;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.skillIdInput;
    if ( !gameObject )
      goto LABEL_14;
    value = UIInput__get_value((UIInput_o *)gameObject, 0);
    DebugInputSkillChangeComponent__DecideSkillIdInput(this, value, v29);
  }
  v30 = this->fields.isPlayerChange;
  targetServantTitle = this->fields.targetServantTitle;
  v32 = (Il2CppObject **)(v30 ? &StringLiteral_25688/*"プレイヤー"*/ : &StringLiteral_25655/*"エネミー"*/);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25395/*"{0}(対象選択)"*/, *v32, 0);
  if ( !targetServantTitle )
LABEL_14:
    sub_1C942F0(gameObject, v27);
  UILabel__set_text(targetServantTitle, (System_String_o *)gameObject, 0);
}


void DebugInputSkillChangeComponent__SelectSkill(
        DebugInputSkillChangeComponent_o *this,
        int32_t skillId,
        System_String_o *skillName,
        System_String_o *skillDetail,
        const MethodInfo *method)
{
  UIInput_o *skillIdInput; // x22
  System_String_o *selectSkillName; // x0
  __int64 v10; // x1
  struct UIInput_o *v11; // x8
  UILabel_o *label; // x22
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = skillId;
  skillIdInput = this->fields.skillIdInput;
  selectSkillName = System_Int32__ToString((int32_t)&v13, 0);
  if ( !skillIdInput )
    goto LABEL_7;
  UIInput__set_value(skillIdInput, selectSkillName, 0);
  v11 = this->fields.skillIdInput;
  if ( !v11
    || (label = v11->fields.label, selectSkillName = System_Int32__ToString((int32_t)&v13, 0), !label)
    || (UILabel__set_text(label, selectSkillName, 0),
        (selectSkillName = (System_String_o *)this->fields.selectSkillName) == 0)
    || (UILabel__set_text((UILabel_o *)selectSkillName, skillName, 0),
        (selectSkillName = (System_String_o *)this->fields.selectSkillDetail) == 0) )
  {
LABEL_7:
    sub_1C942F0(selectSkillName, v10);
  }
  UILabel__set_text((UILabel_o *)selectSkillName, skillDetail, 0);
}


BattleServantData_array *DebugInputSkillChangeComponent__getTargetServantDataArray(
        DebugInputSkillChangeComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  System_Int32_array *EntryIdArray; // x20
  System_Collections_Generic_List_object__o *v5; // x21
  struct UIToggle_array *targetServants; // x8
  __int64 v7; // x22
  int max_length; // w9
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  BattleData_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4D2DE8E & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_int____79050152);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4D2DE8E = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_18;
  EntryIdArray = BattleData__getEntryIdArray(battleData, !this->fields.isPlayerChange, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  targetServants = this->fields.targetServants;
  if ( !targetServants )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    max_length = targetServants->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C942F8(battleData);
    battleData = (BattleData_o *)targetServants->m_Items[v7];
    if ( !battleData )
      goto LABEL_18;
    battleData = (BattleData_o *)UIToggle__get_value((UIToggle_o *)battleData, 0);
    if ( ((unsigned __int8)battleData & 1) != 0 )
    {
      battleData = (BattleData_o *)BasicHelper__IndexValue_int_(
                                     EntryIdArray,
                                     v7,
                                     -1,
                                     (const MethodInfo_318A584 *)Method_BasicHelper_IndexValue_int____79050152);
      if ( (_DWORD)battleData != -1 )
      {
        method = (const MethodInfo *)(unsigned int)battleData;
        battleData = this->fields.battleData;
        if ( !battleData )
          goto LABEL_18;
        battleData = (BattleData_o *)BattleData__getServantData(battleData, (int32_t)method, 0);
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        v18 = battleData;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)battleData,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    targetServants = this->fields.targetServants;
    ++v7;
    if ( !targetServants )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C942F0(battleData, method);
  return (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
}


BattleSkillInfoData_array *DebugInputSkillChangeComponent__getTargetSkillInfoDataArray(
        DebugInputSkillChangeComponent_o *this,
        BattleServantData_array *targetServantDataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  UIToggle_o *value; // x0
  __int64 v7; // x1
  struct UIToggle_array *targetSkills; // x8
  unsigned __int64 v9; // x23
  __int64 v10; // x22
  BattleSkillInfoData_o **v11; // x25
  int max_length; // w9
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UIToggle_o *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4D2DE8F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    byte_4D2DE8F = 1;
  }
  if ( !targetServantDataArray || !targetServantDataArray->max_length )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( SLODWORD(targetServantDataArray->max_length) >= 1 )
  {
    targetSkills = this->fields.targetSkills;
    v9 = 0;
    while ( targetSkills )
    {
      v10 = 0;
      v11 = (BattleSkillInfoData_o **)&targetServantDataArray->m_Items[v9];
      while ( 1 )
      {
        max_length = targetSkills->max_length;
        if ( (int)v10 >= max_length )
          break;
        if ( (unsigned int)v10 >= max_length )
          goto LABEL_27;
        value = targetSkills->m_Items[v10];
        if ( !value )
          goto LABEL_26;
        value = (UIToggle_o *)UIToggle__get_value(value, 0);
        if ( ((unsigned __int8)value & 1) != 0 )
        {
          if ( v9 >= LODWORD(targetServantDataArray->max_length) )
LABEL_27:
            sub_1C942F8(value);
          value = (UIToggle_o *)*v11;
          if ( !*v11 )
            goto LABEL_26;
          value = (UIToggle_o *)BattleServantData__getSelfSkillInfo((BattleServantData_o *)value, v10, 0);
          if ( !v5 )
            goto LABEL_26;
          items = v5->fields._items;
          v20 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v5->fields._size;
          v22 = value;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)value,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v22;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
          }
        }
        targetSkills = this->fields.targetSkills;
        ++v10;
        if ( !targetSkills )
          goto LABEL_26;
      }
      if ( (__int64)++v9 >= SLODWORD(targetServantDataArray->max_length) )
        goto LABEL_23;
    }
LABEL_26:
    sub_1C942F0(value, v7);
  }
LABEL_23:
  if ( !v5 )
    goto LABEL_26;
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}