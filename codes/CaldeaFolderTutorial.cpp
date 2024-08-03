void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v9; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v19; // x2
  __int64 v20; // x21
  __int64 v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v25; // x2
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  struct CaldeaFolderTutorial_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49F900A & 1) == 0 )
  {
    sub_1B640C8(&CaldeaFolderTutorial_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v5);
    sub_1B640C8(&TutorialFlag_ImageId___TypeInfo, v6);
    sub_1B640C8(&CaldeaFolderTutorial_TutorialData_TypeInfo, v7);
    byte_49F900A = 1;
  }
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo,
                                                                 v1,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v11 = sub_1B64170(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_11;
  v14 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v11 + 32) = 21;
  v15 = sub_1B64314(CaldeaFolderTutorial_TutorialData_TypeInfo, v12, v13);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_QWORD *)(v15 + 16) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), v14, v16, v17);
  *(_DWORD *)(v15 + 24) = 129;
  if ( !v9 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v9,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v15,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v11 = sub_1B64170(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_11;
  v20 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v11 + 32) = 22;
  v21 = sub_1B64314(CaldeaFolderTutorial_TutorialData_TypeInfo, v12, v19);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  *(_QWORD *)(v21 + 16) = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), v20, v22, v23);
  *(_DWORD *)(v21 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(
    v9,
    CALDEA_WEEKLY_WAR_ID,
    (Il2CppObject *)v21,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v11 = sub_1B64170(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v11 )
LABEL_11:
    sub_1B64324(v11);
  v26 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
LABEL_12:
    sub_1B6432C(v11, v12);
  *(_DWORD *)(v11 + 32) = 33;
  v27 = sub_1B64314(CaldeaFolderTutorial_TutorialData_TypeInfo, v12, v25);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  *(_QWORD *)(v27 + 16) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 16), v26, v28, v29);
  *(_DWORD *)(v27 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(
    v9,
    CALDEA_FRIEND_STORY_WAR_ID,
    (Il2CppObject *)v27,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  v30 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v30->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->FolderTutorials, (int32_t)v9, v31, v32);
}


void __fastcall CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CaldeaFolderTutorial_c *v8; // x0
  System_Collections_Generic_Dictionary_int__object__o *FolderTutorials; // x0
  int32_t monitor; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9008 & 1) == 0 )
  {
    sub_1B640C8(&CaldeaFolderTutorial_TypeInfo, callback);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&TutorialFlag_TypeInfo, v7);
    byte_49F9008 = 1;
  }
  v8 = CaldeaFolderTutorial_TypeInfo;
  value = 0LL;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v8 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)v8->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_18;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                              FolderTutorials,
                                                                              warId,
                                                                              &value,
                                                                              (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_1B64324(FolderTutorials);
  monitor = (int32_t)value[1].monitor;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37376848(monitor, 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        (TutorialFlag_ImageId_array *)value[1].klass,
        (int32_t)value[1].monitor,
        callback,
        0LL,
        0LL,
        0LL);
      return 1;
    }
    goto LABEL_18;
  }
  IsTutorialAvailable = 1;
LABEL_13:
  ActionExtensions__Call(callback, 0LL);
  return IsTutorialAvailable;
}


void __fastcall CaldeaFolderTutorial__OnClickHelp(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  CaldeaFolderTutorial_c *v8; // x0
  Il2CppObject *FolderTutorials; // x0
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F9009 & 1) == 0 )
  {
    sub_1B640C8(&Method_CaldeaFolderTutorial_OnClickHelp__, method);
    sub_1B640C8(&CaldeaFolderTutorial_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F9009 = 1;
  }
  v6 = Method_CaldeaFolderTutorial_OnClickHelp__;
  value = 0LL;
  if ( (*((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_CaldeaFolderTutorial_OnClickHelp__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  v8 = CaldeaFolderTutorial_TypeInfo;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v8 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (Il2CppObject *)v8->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        (TutorialFlag_ImageId_array *)value[1].klass,
        -1,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
LABEL_14:
    sub_1B64324(FolderTutorials);
  }
  EventID = WarMaster__getEventID(warId, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(EventID, 33, 0LL, 0LL);
}


void __fastcall CaldeaFolderTutorial_TutorialData___ctor(
        CaldeaFolderTutorial_TutorialData_o *this,
        TutorialFlag_ImageId_array *imgs,
        int32_t flg,
        const MethodInfo *method)
{
  CaldeaFolderTutorial_TutorialData_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6, (int32_t)imgs, v7, v8);
  LODWORD(v6->monitor) = flg;
}