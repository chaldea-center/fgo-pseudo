void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FC275 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceBg_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18843/*"front"*/, v8);
    byte_40FC275 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceBg_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18843/*"front"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18843/*"front"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_40FC274 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v10);
    sub_B16FFC(&string_TypeInfo, v11);
    byte_40FC274 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadedChangeBgList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)Empty,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgSpShadowList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v42 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo,
                                                                                        v38,
                                                                                        v39,
                                                                                        v40,
                                                                                        v41);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v42,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.historyBgState,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo,
                                                                                                  v49,
                                                                                                  v50,
                                                                                                  v51,
                                                                                                  v52);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v53;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgInfoList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattlePerformanceBg_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_40FC273 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, callback);
    byte_40FC273 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (BattleServantConfConponent_o *)&this->fields.onLoadBgFinished;
  v7 = (System_Int32_array **)System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo )
  {
    v14 = (BattlePerformanceBg_o *)sub_B173C8(v7);
    BattlePerformanceBg___ctor(v14, v15);
  }
  else
  {
    p_onLoadBgFinished->klass = (BattleServantConfConponent_c *)v7;
    sub_B16F98(p_onLoadBgFinished, v7, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__AddChangeBgInfo(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  __int64 v21; // x1
  BattlePerformanceBg_BgInfo_o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x25
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_40FC266 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21);
    byte_40FC266 = 1;
  }
  v22 = (BattlePerformanceBg_BgInfo_o *)sub_B170CC(
                                          BattlePerformanceBg_BgInfo_TypeInfo,
                                          *(_QWORD *)&No,
                                          *(_QWORD *)&tp,
                                          changeDirect,
                                          parentCamera);
  v25.fields.x = v17;
  v25.fields.y = v16;
  v25.fields.z = v15;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
  BattlePerformanceBg_BgInfo___ctor(v22, No, tp, v25, v26, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgInfoList,
    v23,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ChangeBg(
        BattlePerformanceBg_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *curBg,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x6

  if ( !curBg )
    sub_B170D4();
  BattlePerformanceBg__changeBg(
    this,
    *((_DWORD *)&curBg->fields.isActive + 1),
    curBg->fields.id,
    pos,
    rot,
    changeDirect,
    parentCamera,
    callback,
    v8);
}


void __fastcall BattlePerformanceBg__ClearCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onLoadBgFinished = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array *ObjectNameList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  int i; // w9

  if ( !data || (ObjectNameList = AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_B170D4();
  max_length = ObjectNameList->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(ObjectNameList, v4, v5);
        sub_B170A0();
      }
    }
  }
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  if ( (byte_40FC267 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__, method);
    byte_40FC267 = 1;
  }
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B170D4();
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x20
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *v5; // x0
  BattlePerformanceBg_BgInfo_o *v6; // x19

  if ( (byte_40FC268 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v3);
    byte_40FC268 = 1;
  }
  if ( !BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
    return 0LL;
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B170D4();
  v5 = this->fields.bgInfoList;
  if ( !bgInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v6 = bgInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
    0,
    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v6;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  BattleBgComponent_array *BattleBgComponents; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20

  if ( (byte_40FC270 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_BattleBgComponent___, key);
    sub_B16FFC(&Method_System_Func_BattleBgComponent__bool___ctor__, v7);
    sub_B16FFC(&System_Func_BattleBgComponent__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__, v9);
    sub_B16FFC(&BattlePerformanceBg___c__DisplayClass67_0_TypeInfo, v10);
    byte_40FC270 = 1;
  }
  v11 = sub_B170CC(BattlePerformanceBg___c__DisplayClass67_0_TypeInfo, key, method, v3, v4);
  BattlePerformanceBg___c__DisplayClass67_0___ctor((BattlePerformanceBg___c__DisplayClass67_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = key;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)key, v12, v13, v14, v15, v16, v17);
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v18);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBgComponent__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBgComponent__bool___ctor__);
  return (BattleBgComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BattleBgComponents,
                                  (System_Func_T__bool__o *)v24,
                                  (const MethodInfo_18B650C *)Method_BasicHelper_Find_BattleBgComponent___);
}


System_String_o *__fastcall BattlePerformanceBg__GetAssetPass(int32_t bgNo, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = bgNo;
  if ( (byte_40FC25A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2791/*"Bg/"*/, method);
    byte_40FC25A = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_2791/*"Bg/"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *BgAssetData; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = shadowId;
  if ( (byte_40FC26E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, *(_QWORD *)&shadowId);
    sub_B16FFC(&StringLiteral_22000/*"shadow_"*/, v4);
    byte_40FC26E = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_22000/*"shadow_"*/, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      BgAssetData,
                                      v7,
                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleBgMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v26; // w21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *bgSpShadowList; // x0
  struct System_Collections_Generic_List_string__o *v28; // x0
  System_String_o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  AssetLoader_LoadEndDataHandler_o *v34; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC263 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B16FFC(&Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__, v15);
    sub_B16FFC(&BattlePerformanceBg___c__DisplayClass46_0_TypeInfo, v16);
    byte_40FC263 = 1;
  }
  effectPath = 0LL;
  v17 = sub_B170CC(
          BattlePerformanceBg___c__DisplayClass46_0_TypeInfo,
          *(_QWORD *)&no,
          *(_QWORD *)&tp,
          finishCallback,
          method);
  BattlePerformanceBg___c__DisplayClass46_0___ctor((BattlePerformanceBg___c__DisplayClass46_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 16),
    (System_Int32_array **)finishCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_WarQuestSelectionMaster, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_15;
  v26 = BgSpecialShadowEffectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v26, 0LL) )
    goto LABEL_15;
  bgSpShadowList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_22;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         bgSpShadowList,
         (WarBoardManager_TaskList_o *)effectPath,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_15:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
    return;
  }
  v28 = this->fields.bgSpShadowList;
  if ( !v28 )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v28,
    (EventMissionProgressRequest_Argument_ProgressData_o *)effectPath,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  v29 = effectPath;
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)v17,
    Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v29, v34, 1, 0LL);
}


void __fastcall BattlePerformanceBg__OnEndBgLoad(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattlePerformanceBg_BgInfo_o *BgInfo; // x0
  const MethodInfo *v5; // x6

  this->fields.IsLoading = 0;
  if ( BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
  {
    BgInfo = BattlePerformanceBg__FetchBgInfo(this, v3);
    if ( BgInfo )
      BattlePerformanceBg__changeBg(
        this,
        BgInfo->fields.bgNo,
        BgInfo->fields.tp,
        BgInfo->fields.pos,
        BgInfo->fields.rot,
        BgInfo->fields.changeDirect,
        BgInfo->fields.parentCamera,
        BgInfo->fields.callback,
        v5);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBg(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *actionCamera; // x20
  BattleActionCamera_o *v16; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v18; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FC25D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC25D = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_11;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_11:
    v7 = (UnityEngine_Object_o *)*p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Object_o *)*p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v8, 0LL);
      *p_bgobject = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.bgobject, 0LL, v9, v10, v11, v12, v13, v14);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v16 = this->fields.actionCamera;
      if ( !v16 )
        sub_B170D4();
      BattleActionCamera__stopCameraAnimation(v16, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v18 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      v20 = (UnityEngine_Object_o *)*p_frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v20, 0LL);
      *p_frontobject = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.frontobject, 0LL, v21, v22, v23, v24, v25, v26);
    }
    BattlePerformanceBg__ReleaseBg_29006040(this, this->fields.nowBgId, v19);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC261 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_40FC261 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgSpShadowList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v10 = this->fields.bgSpShadowList;
  if ( !v10 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ReleaseBg_29006040(
        BattlePerformanceBg_o *this,
        int32_t no,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *AssetPass; // x0
  WarBoardManager_TaskList_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_WarBoardManager_TaskList__o *loadedChangeBgList; // x0

  if ( (byte_40FC260 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B16FFC(&BattlePerformanceBg_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v7);
    byte_40FC260 = 1;
  }
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = BattlePerformanceBg__GetAssetPass(no, *(const MethodInfo **)&no);
  if ( !this->fields.loadedChangeBgList )
    goto LABEL_14;
  v9 = (WarBoardManager_TaskList_o *)AssetPass;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
         (WarBoardManager_TaskList_o *)AssetPass,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    loadedChangeBgList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList;
    if ( loadedChangeBgList )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        loadedChangeBgList,
        v9,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_10:
  this->fields.BgAssetData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.BgAssetData, 0LL, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)v9, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC25F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_40FC25F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedChangeBgList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_29947376(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.loadedChangeBgList;
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__UpdateColor(
        BattlePerformanceBg_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientLight(color, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__changeBg(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Action_o **p_EndCallback; // x25
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v35; // x2
  __int64 v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Object_array *v43; // x20
  __int64 v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x21
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x21
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Collections_Hashtable_o *v94; // x0
  int v95; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_Color_o black; // [xsp+10h] [xbp-90h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_40FC269 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Color_TypeInfo, *(_QWORD *)&No);
    sub_B16FFC(&object___TypeInfo, v22);
    sub_B16FFC(&float_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v24);
    sub_B16FFC(&StringLiteral_18275/*"endChangeColor"*/, v25);
    sub_B16FFC(&StringLiteral_15000/*"UpdateColor"*/, v26);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v27);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v28);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v29);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v30);
    sub_B16FFC(&iTween_TypeInfo, v31);
    byte_40FC269 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v98.fields.x = v18;
    v98.fields.y = v17;
    v98.fields.z = v16;
    v99.fields.x = x;
    v99.fields.y = y;
    v99.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v98, v99, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.EndCallback,
    (System_Int32_array **)callback,
    *(System_String_array ***)&tp,
    (System_String_array **)changeDirect,
    (System_Boolean_array **)parentCamera,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v9);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      System_Action__Invoke(*p_EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v33);
    return;
  }
  this->fields.loadbgno = No;
  this->fields.loadbgType = tp;
  this->fields.pos.fields.x = v18;
  this->fields.pos.fields.y = v17;
  this->fields.pos.fields.z = v16;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  this->fields.fade = 1;
  if ( changeDirect )
  {
    BattlePerformanceBg__endChangeColor(this, v33);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v36 = sub_B17014(object___TypeInfo, 10LL, v35);
  if ( !v36 )
    sub_B170D4();
  v43 = (System_Object_array *)v36;
  v44 = StringLiteral_18842/*"from"*/;
  if ( StringLiteral_18842/*"from"*/ )
  {
    v44 = sub_B170BC(StringLiteral_18842/*"from"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( !v43->max_length )
    goto LABEL_61;
  v43->m_Items[0] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)v43->m_Items, v45, v37, v38, v39, v40, v41, v42);
  tmpcolor = this->fields.tmpcolor;
  v44 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v51 = (System_Int32_array **)v44;
  if ( v44 )
  {
    v44 = sub_B170BC(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
  }
  if ( v43->max_length <= 1 )
    goto LABEL_61;
  v43->m_Items[1] = (Il2CppObject *)v51;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[1], v51, v37, v46, v47, v48, v49, v50);
  v44 = StringLiteral_22621/*"to"*/;
  if ( StringLiteral_22621/*"to"*/ )
  {
    v44 = sub_B170BC(StringLiteral_22621/*"to"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v43->max_length <= 2 )
    goto LABEL_61;
  v43->m_Items[2] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[2], v45, v37, v52, v53, v54, v55, v56);
  black = UnityEngine_Color__get_black(0LL);
  v44 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v62 = (System_Int32_array **)v44;
  if ( v44 )
  {
    v44 = sub_B170BC(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
  }
  if ( v43->max_length <= 3 )
    goto LABEL_61;
  v43->m_Items[3] = (Il2CppObject *)v62;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[3], v62, v37, v57, v58, v59, v60, v61);
  v44 = StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v44 = sub_B170BC(StringLiteral_22584/*"time"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v43->max_length <= 4 )
    goto LABEL_61;
  v43->m_Items[4] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[4], v45, v37, v63, v64, v65, v66, v67);
  v95 = 1056964608;
  v44 = j_il2cpp_value_box_0(float_TypeInfo, &v95);
  v73 = (System_Int32_array **)v44;
  if ( v44 )
  {
    v44 = sub_B170BC(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
    {
LABEL_62:
      sub_B170F4(v44);
      sub_B170A0();
    }
  }
  if ( v43->max_length <= 5 )
    goto LABEL_61;
  v43->m_Items[5] = (Il2CppObject *)v73;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[5], v73, v37, v68, v69, v70, v71, v72);
  v44 = StringLiteral_21182/*"onupdate"*/;
  if ( StringLiteral_21182/*"onupdate"*/ )
  {
    v44 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v43->max_length <= 6 )
    goto LABEL_61;
  v43->m_Items[6] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[6], v45, v37, v74, v75, v76, v77, v78);
  v44 = StringLiteral_15000/*"UpdateColor"*/;
  if ( StringLiteral_15000/*"UpdateColor"*/ )
  {
    v44 = sub_B170BC(StringLiteral_15000/*"UpdateColor"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_15000/*"UpdateColor"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v43->max_length <= 7 )
    goto LABEL_61;
  v43->m_Items[7] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[7], v45, v37, v79, v80, v81, v82, v83);
  v44 = StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v44 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v43->max_length <= 8 )
    goto LABEL_61;
  v43->m_Items[8] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[8], v45, v37, v84, v85, v86, v87, v88);
  v44 = StringLiteral_18275/*"endChangeColor"*/;
  if ( StringLiteral_18275/*"endChangeColor"*/ )
  {
    v44 = sub_B170BC(StringLiteral_18275/*"endChangeColor"*/, v43->obj.klass->_1.element_class);
    if ( v44 )
    {
      v45 = (System_Int32_array **)StringLiteral_18275/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_62;
  }
  v45 = 0LL;
LABEL_56:
  if ( v43->max_length <= 9 )
  {
LABEL_61:
    sub_B17100(v44, v45, v37);
    sub_B170A0();
  }
  v43->m_Items[9] = (Il2CppObject *)v45;
  sub_B16F98((BattleServantConfConponent_o *)&v43->m_Items[9], v45, v37, v89, v90, v91, v92, v93);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v94 = iTween__Hash(v43, 0LL);
  iTween__ValueTo(gameObject, v94, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endChangeBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct BattlePerformanceBg_BgState_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattlePerformanceBg_o *v31; // x0
  const MethodInfo *v32; // x3
  UnityEngine_GameObject_o *BgObject; // x0
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x22
  int v39; // s0
  UnityEngine_Transform_o *v42; // x0
  UnityEngine_Transform_o *v43; // x22
  int v44; // s0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattlePerformanceBg_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_GameObject_o *FrontObject; // x20
  const MethodInfo *v56; // x2
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Transform_o *v58; // x0
  UnityEngine_Transform_o *v59; // x0
  UnityEngine_Transform_o *v60; // x21
  int v61; // s0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  BattleBgComponent_array *BattleBgComponents; // x0
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v75; // w23
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  BattlePerformanceBg_ChangedBgArgs_o *v80; // x24
  const MethodInfo *v81; // x1
  System_Action_o *EndCallback; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v84; // x2
  __int64 v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Object_array *v92; // x21
  __int64 v93; // x0
  System_Int32_array **v94; // x1
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x22
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x19
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x19
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Collections_Hashtable_o *v143; // x0
  int v144; // [xsp+Ch] [xbp-54h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o black; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC26C & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_B16FFC(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Color_TypeInfo, v11);
    sub_B16FFC(&object___TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&float_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v15);
    sub_B16FFC(&StringLiteral_18275/*"endChangeColor"*/, v16);
    sub_B16FFC(&StringLiteral_15000/*"UpdateColor"*/, v17);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v18);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v19);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v20);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v21);
    sub_B16FFC(&iTween_TypeInfo, v22);
    byte_40FC26C = 1;
  }
  this->fields.BgAssetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.BgAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_78;
  v24 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v23);
  this->fields.nowBgState = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowBgState,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  BgObject = BattlePerformanceBg__getBgObject(v31, data, this->fields.loadbgType, v32);
  if ( !BgObject )
    goto LABEL_78;
  parentCamera = this->fields.parentCamera;
  v35 = BgObject;
  transform = UnityEngine_GameObject__get_transform(BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !transform )
      goto LABEL_78;
    UnityEngine_Transform__set_parent(transform, this->fields.bgRootCamera, 0LL);
    v37 = UnityEngine_GameObject__get_transform(v35, 0LL);
    if ( !v37 )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles(v37, this->fields.rot, 0LL);
  }
  else
  {
    if ( !transform )
      goto LABEL_78;
    UnityEngine_Transform__set_parent(transform, this->fields.bgRoot, 0LL);
    v38 = UnityEngine_GameObject__get_transform(v35, 0LL);
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v38 )
      goto LABEL_78;
    UnityEngine_Transform__set_eulerAngles(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
  }
  v42 = UnityEngine_GameObject__get_transform(v35, 0LL);
  if ( !v42 )
    goto LABEL_78;
  UnityEngine_Transform__set_localPosition(v42, this->fields.pos, 0LL);
  v43 = UnityEngine_GameObject__get_transform(v35, 0LL);
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Vector3__get_one(0LL);
  if ( !v43 )
    goto LABEL_78;
  UnityEngine_Transform__set_localScale(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
  this->fields.bgobject = v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgobject,
    (System_Int32_array **)v35,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  FrontObject = BattlePerformanceBg__getFrontObject(v53, data, this->fields.loadbgType, v54);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)FrontObject, 0LL, 0LL) )
  {
    if ( !FrontObject )
      goto LABEL_78;
    v57 = UnityEngine_GameObject__get_transform(FrontObject, 0LL);
    if ( !v57 )
      goto LABEL_78;
    UnityEngine_Transform__set_parent(v57, this->fields.bgRootCamera, 0LL);
    v58 = UnityEngine_GameObject__get_transform(FrontObject, 0LL);
    if ( !v58 )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles(v58, this->fields.rot, 0LL);
    v59 = UnityEngine_GameObject__get_transform(FrontObject, 0LL);
    if ( !v59 )
      goto LABEL_78;
    UnityEngine_Transform__set_localPosition(v59, this->fields.pos, 0LL);
    v60 = UnityEngine_GameObject__get_transform(FrontObject, 0LL);
    *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Vector3__get_one(0LL);
    if ( !v60 )
      goto LABEL_78;
    UnityEngine_Transform__set_localScale(v60, *(UnityEngine_Vector3_o *)&v61, 0LL);
    this->fields.frontobject = FrontObject;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.frontobject,
      (System_Int32_array **)FrontObject,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  nowBgState = this->fields.nowBgState;
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v56);
  if ( !nowBgState )
    goto LABEL_78;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, BattleBgComponents, this->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v75 = this->fields.parentCamera;
  v80 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B170CC(
                                                 BattlePerformanceBg_ChangedBgArgs_TypeInfo,
                                                 v76,
                                                 v77,
                                                 v78,
                                                 v79);
  BattlePerformanceBg_ChangedBgArgs___ctor(v80, loadbgno, loadbgType, v75, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v80,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    this->fields.fade = 0;
    white = UnityEngine_Color__get_white(0LL);
    UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      System_Action__Invoke(EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v81);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v85 = sub_B17014(object___TypeInfo, 10LL, v84);
  if ( !v85 )
LABEL_78:
    sub_B170D4();
  v92 = (System_Object_array *)v85;
  v93 = StringLiteral_18842/*"from"*/;
  if ( StringLiteral_18842/*"from"*/ )
  {
    v93 = sub_B170BC(StringLiteral_18842/*"from"*/, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
    v94 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( !v92->max_length )
    goto LABEL_79;
  v92->m_Items[0] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)v92->m_Items, v94, v86, v87, v88, v89, v90, v91);
  black = UnityEngine_Color__get_black(0LL);
  v93 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v100 = (System_Int32_array **)v93;
  if ( v93 )
  {
    v93 = sub_B170BC(v93, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
  }
  if ( v92->max_length <= 1 )
    goto LABEL_79;
  v92->m_Items[1] = (Il2CppObject *)v100;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[1], v100, v86, v95, v96, v97, v98, v99);
  v93 = StringLiteral_22621/*"to"*/;
  if ( StringLiteral_22621/*"to"*/ )
  {
    v93 = sub_B170BC(StringLiteral_22621/*"to"*/, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
    v94 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v92->max_length <= 2 )
    goto LABEL_79;
  v92->m_Items[2] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[2], v94, v86, v101, v102, v103, v104, v105);
  tmpcolor = this->fields.tmpcolor;
  v93 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v111 = (System_Int32_array **)v93;
  if ( v93 )
  {
    v93 = sub_B170BC(v93, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
  }
  if ( v92->max_length <= 3 )
    goto LABEL_79;
  v92->m_Items[3] = (Il2CppObject *)v111;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[3], v111, v86, v106, v107, v108, v109, v110);
  v93 = StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v93 = sub_B170BC(StringLiteral_22584/*"time"*/, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
    v94 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v92->max_length <= 4 )
    goto LABEL_79;
  v92->m_Items[4] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[4], v94, v86, v112, v113, v114, v115, v116);
  v144 = 1056964608;
  v93 = j_il2cpp_value_box_0(float_TypeInfo, &v144);
  v122 = (System_Int32_array **)v93;
  if ( v93 )
  {
    v93 = sub_B170BC(v93, v92->obj.klass->_1.element_class);
    if ( !v93 )
    {
LABEL_80:
      sub_B170F4(v93);
      sub_B170A0();
    }
  }
  if ( v92->max_length <= 5 )
    goto LABEL_79;
  v92->m_Items[5] = (Il2CppObject *)v122;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[5], v122, v86, v117, v118, v119, v120, v121);
  v93 = StringLiteral_21182/*"onupdate"*/;
  if ( StringLiteral_21182/*"onupdate"*/ )
  {
    v93 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
    v94 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v92->max_length <= 6 )
    goto LABEL_79;
  v92->m_Items[6] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[6], v94, v86, v123, v124, v125, v126, v127);
  v93 = StringLiteral_15000/*"UpdateColor"*/;
  if ( StringLiteral_15000/*"UpdateColor"*/ )
  {
    v93 = sub_B170BC(StringLiteral_15000/*"UpdateColor"*/, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
    v94 = (System_Int32_array **)StringLiteral_15000/*"UpdateColor"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v92->max_length <= 7 )
    goto LABEL_79;
  v92->m_Items[7] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[7], v94, v86, v128, v129, v130, v131, v132);
  v93 = StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v93 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v92->obj.klass->_1.element_class);
    if ( !v93 )
      goto LABEL_80;
    v94 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v92->max_length <= 8 )
    goto LABEL_79;
  v92->m_Items[8] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[8], v94, v86, v133, v134, v135, v136, v137);
  v93 = StringLiteral_18275/*"endChangeColor"*/;
  if ( StringLiteral_18275/*"endChangeColor"*/ )
  {
    v93 = sub_B170BC(StringLiteral_18275/*"endChangeColor"*/, v92->obj.klass->_1.element_class);
    if ( v93 )
    {
      v94 = (System_Int32_array **)StringLiteral_18275/*"endChangeColor"*/;
      goto LABEL_73;
    }
    goto LABEL_80;
  }
  v94 = 0LL;
LABEL_73:
  if ( v92->max_length <= 9 )
  {
LABEL_79:
    sub_B17100(v93, v94, v86);
    sub_B170A0();
  }
  v92->m_Items[9] = (Il2CppObject *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v92->m_Items[9], v94, v86, v138, v139, v140, v141, v142);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v143 = iTween__Hash(v92, 0LL);
  iTween__ValueTo(gameObject, v143, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t fade; // w8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t loadbgno; // w20
  System_String_o *AssetPass; // x0
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *EndCallback; // x0
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  AssetLoader_LoadEndDataHandler_o *v25; // x21
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC26D & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceBg_endChangeBg__, v3);
    sub_B16FFC(&BattlePerformanceBg_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    byte_40FC26D = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    black = UnityEngine_Color__get_black(0LL);
    UnityEngine_RenderSettings__set_ambientLight(black, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v9);
    loadbgno = this->fields.loadbgno;
    if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    }
    AssetPass = BattlePerformanceBg__GetAssetPass(loadbgno, v10);
    if ( this->fields.loadedChangeBgList )
    {
      v13 = AssetPass;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
             (WarBoardManager_TaskList_o *)AssetPass,
             (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
        v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
        AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getAsset_29946328(v13, v18, 0LL) )
          return;
LABEL_21:
        v25 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
        AssetLoader_LoadEndDataHandler___ctor(v25, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__loadAssetStorage(v13, v25, 1, 0LL);
        return;
      }
      if ( !System_String__op_Inequality(v13, this->fields.initLoadedBgPath, 0LL) )
        goto LABEL_21;
      loadedChangeBgList = this->fields.loadedChangeBgList;
      if ( loadedChangeBgList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)loadedChangeBgList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        goto LABEL_21;
      }
    }
    sub_B170D4();
  }
  EndCallback = this->fields.EndCallback;
  this->fields.fade = 0;
  if ( EndCallback )
    System_Action__Invoke(EndCallback, 0LL);
  BattlePerformanceBg__OnEndBgLoad(this, method);
}


void __fastcall BattlePerformanceBg__endloadBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x4

  if ( (byte_40FC264 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, v7);
    sub_B16FFC(&BattlePerformanceBg___c__DisplayClass47_0_TypeInfo, v8);
    byte_40FC264 = 1;
  }
  v9 = sub_B170CC(BattlePerformanceBg___c__DisplayClass47_0_TypeInfo, data, method, v3, v4);
  BattlePerformanceBg___c__DisplayClass47_0___ctor((BattlePerformanceBg___c__DisplayClass47_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = data;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)data, v16, v17, v18, v19, v20, v21);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)v9, Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattlePerformanceBg_BgState_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_GameObject_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v28; // x2
  BattleActionCamera_o *v29; // x0
  BattlePerformanceBg_o *v30; // x0
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_o *v32; // x0
  _BOOL4 parentCamera; // w23
  UnityEngine_GameObject_o *v34; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Transform_o *v37; // x23
  int v38; // s0
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Transform_o *v42; // x23
  int v43; // s0
  int32_t newBgId; // w8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattlePerformanceBg_o *v53; // x0
  const MethodInfo *v54; // x3
  UnityEngine_GameObject_o *v55; // x20
  const MethodInfo *v56; // x2
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Transform_o *v58; // x0
  UnityEngine_Transform_o *v59; // x0
  UnityEngine_Transform_o *v60; // x21
  int v61; // s0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  BattleBgComponent_array *BattleBgComponents; // x0
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v75; // w19
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  BattlePerformanceBg_ChangedBgArgs_o *v80; // x23

  if ( (byte_40FC265 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_B16FFC(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FC265 = 1;
  }
  this->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_57;
  v7 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, method);
  this->fields.nowBgState = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nowBgState,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_12;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_12:
    v23 = (UnityEngine_Object_o *)*p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Object_o *)*p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v24, 0LL);
    }
    v25 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Object_o *)this->fields.frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v26, 0LL);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v29 = this->fields.actionCamera;
      if ( !v29 )
        goto LABEL_57;
      BattleActionCamera__stopCameraAnimation(v29, 0LL);
    }
    BattlePerformanceBg__ReleaseBg_29006040(this, this->fields.nowBgId, v28);
  }
  this->fields.BgAssetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.BgAssetData,
    (System_Int32_array **)data,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v32 = BattlePerformanceBg__getBgObject(v30, data, this->fields.loadbgType, v31);
  if ( !v32 )
    goto LABEL_57;
  parentCamera = this->fields.parentCamera;
  v34 = v32;
  transform = UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( parentCamera )
  {
    if ( !transform )
      goto LABEL_57;
    UnityEngine_Transform__set_parent(transform, this->fields.bgRootCamera, 0LL);
    v36 = UnityEngine_GameObject__get_transform(v34, 0LL);
    if ( !v36 )
      goto LABEL_57;
    UnityEngine_Transform__set_localEulerAngles(v36, this->fields.rot, 0LL);
  }
  else
  {
    if ( !transform )
      goto LABEL_57;
    UnityEngine_Transform__set_parent(transform, this->fields.bgRoot, 0LL);
    v37 = UnityEngine_GameObject__get_transform(v34, 0LL);
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v37 )
      goto LABEL_57;
    UnityEngine_Transform__set_eulerAngles(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  }
  v41 = UnityEngine_GameObject__get_transform(v34, 0LL);
  if ( !v41 )
    goto LABEL_57;
  UnityEngine_Transform__set_localPosition(v41, this->fields.pos, 0LL);
  v42 = UnityEngine_GameObject__get_transform(v34, 0LL);
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
  if ( !v42 )
    goto LABEL_57;
  UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
  newBgId = this->fields.newBgId;
  this->fields.bgobject = v34;
  this->fields.nowBgId = newBgId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgobject,
    (System_Int32_array **)v34,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v55 = BattlePerformanceBg__getFrontObject(v53, data, this->fields.loadbgType, v54);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0LL, 0LL) )
  {
    if ( v55 )
    {
      v57 = UnityEngine_GameObject__get_transform(v55, 0LL);
      if ( v57 )
      {
        UnityEngine_Transform__set_parent(v57, this->fields.bgRootCamera, 0LL);
        v58 = UnityEngine_GameObject__get_transform(v55, 0LL);
        if ( v58 )
        {
          UnityEngine_Transform__set_localEulerAngles(v58, this->fields.rot, 0LL);
          v59 = UnityEngine_GameObject__get_transform(v55, 0LL);
          if ( v59 )
          {
            UnityEngine_Transform__set_localPosition(v59, this->fields.pos, 0LL);
            v60 = UnityEngine_GameObject__get_transform(v55, 0LL);
            *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Vector3__get_one(0LL);
            if ( v60 )
            {
              UnityEngine_Transform__set_localScale(v60, *(UnityEngine_Vector3_o *)&v61, 0LL);
              this->fields.frontobject = v55;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.frontobject,
                (System_Int32_array **)v55,
                v64,
                v65,
                v66,
                v67,
                v68,
                v69);
              goto LABEL_55;
            }
          }
        }
      }
    }
LABEL_57:
    sub_B170D4();
  }
LABEL_55:
  nowBgState = this->fields.nowBgState;
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v56);
  if ( !nowBgState )
    goto LABEL_57;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, BattleBgComponents, this->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v75 = this->fields.parentCamera;
  v80 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B170CC(
                                                 BattlePerformanceBg_ChangedBgArgs_TypeInfo,
                                                 v76,
                                                 v77,
                                                 v78,
                                                 v79);
  BattlePerformanceBg_ChangedBgArgs___ctor(v80, loadbgno, loadbgType, v75, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v80,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


// local variable allocation has failed, the output may be wrong!
BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_GameObject_o *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  UnityEngine_Object_o *frontobject; // x22
  UnityEngine_GameObject_o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0

  if ( (byte_40FC25E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___, includeInactive);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FC25E = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBgComponent__TypeInfo,
                                                                                                  includeInactive,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    v14 = this->fields.bgobject;
    if ( !v14 )
      goto LABEL_19;
    v15 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                           v14,
                                                           includeInactive,
                                                           (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v12 )
      goto LABEL_19;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
      v15,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
    if ( v12 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_19:
    sub_B170D4();
  }
  v17 = this->fields.frontobject;
  if ( !v17 )
    goto LABEL_19;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                         v17,
                                                         includeInactive,
                                                         (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v12 )
    goto LABEL_19;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    v18,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x1
  System_String_o *v11; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v15; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = tp;
  if ( (byte_40FC26A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16631/*"bg"*/, v8);
    sub_B16FFC(&StringLiteral_16634/*"bg0"*/, v9);
    byte_40FC26A = 1;
  }
  if ( tp < 1 )
  {
    if ( !data )
      sub_B170D4();
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16631/*"bg"*/,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16634/*"bg0"*/,
                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v16,
                                           (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v17, 0LL);
    v11 = System_String__Concat_43743732((System_String_o *)StringLiteral_16631/*"bg"*/, v10, 0LL);
    if ( !data )
      sub_B170D4();
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      data,
                                                      v11,
                                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v12,
                                           (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v15 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16631/*"bg"*/,
                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v15,
                                           (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


System_String_array *__fastcall BattlePerformanceBg__getChangeBgList(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  return this->fields.debuglist;
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattlePerformanceBg_c *v9; // x0
  System_String_o *Frontfile; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  BattlePerformanceBg_c *v14; // x0
  bool v15; // w8
  UnityEngine_GameObject_o *result; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = tp;
  if ( (byte_40FC26B & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&BattlePerformanceBg_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FC26B = 1;
  }
  v9 = BattlePerformanceBg_TypeInfo;
  if ( tp > 0 )
  {
    if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
      v9 = BattlePerformanceBg_TypeInfo;
    }
    Frontfile = v9->static_fields->Frontfile;
    v11 = System_Int32__ToString((int32_t)&v17, 0LL);
    v12 = System_String__Concat_43743732(Frontfile, v11, 0LL);
    if ( data )
      goto LABEL_8;
LABEL_28:
    sub_B170D4();
  }
  if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v9 = BattlePerformanceBg_TypeInfo;
  }
  v12 = v9->static_fields->Frontfile;
  if ( !data )
    goto LABEL_28;
LABEL_8:
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v12,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_19;
  v14 = BattlePerformanceBg_TypeInfo;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v14 = BattlePerformanceBg_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v14->static_fields->Frontfile,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
LABEL_19:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


BattlePerformanceBg_SaveData_o *__fastcall BattlePerformanceBg__getSaveData(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x20
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattlePerformanceBg_BgState_o *v26; // x8
  System_Int32_array **bgName; // x1
  struct BattlePerformanceBg_BgState_o *v28; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v29; // x0
  unsigned int Count; // w0
  __int64 v31; // x2
  System_Int32_array **v32; // x0
  _DWORD **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct BattlePerformanceBg_BgState_o *v40; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *v41; // x0
  unsigned int v42; // w25
  System_Int32_array **value; // x23
  System_Int32_array **key; // x24
  __int64 v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  _DWORD *v58; // x23
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  _DWORD *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  BattlePerformanceBg_SaveData_o *result; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v73; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v74; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40FC25B & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_B16FFC(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__, v11);
    sub_B16FFC(&BattlePerformanceBg_SaveData_TypeInfo, v12);
    byte_40FC25B = 1;
  }
  memset(&v74, 0, sizeof(v74));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v17 = sub_B170CC(BattlePerformanceBg_SaveData_TypeInfo, v13, v14, v15, v16);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v17, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( !nowBgState )
    goto LABEL_24;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)nowBgState->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         compDictionary,
         (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__) < 1 )
  {
LABEL_24:
    if ( v17 )
      goto LABEL_25;
LABEL_26:
    sub_B170D4();
  }
  v26 = this->fields.nowBgState;
  if ( !v26 )
    goto LABEL_26;
  if ( !v17 )
    goto LABEL_26;
  bgName = (System_Int32_array **)v26->fields.bgName;
  *(_QWORD *)(v17 + 16) = bgName;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), bgName, v20, v21, v22, v23, v24, v25);
  v28 = this->fields.nowBgState;
  if ( !v28 )
    goto LABEL_26;
  v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v28->fields.compDictionary;
  if ( !v29 )
    goto LABEL_26;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            v29,
            (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  v32 = (System_Int32_array **)sub_B17014(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count, v31);
  *(_QWORD *)(v17 + 24) = v32;
  v33 = (_DWORD **)(v17 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 24), v32, v34, v35, v36, v37, v38, v39);
  v40 = this->fields.nowBgState;
  if ( !v40 )
    goto LABEL_26;
  v41 = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v40->fields.compDictionary;
  if ( !v41 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v73,
    v41,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
  v74 = v73;
  v42 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v74,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
  {
    key = (System_Int32_array **)v74.fields.current.fields.key;
    value = (System_Int32_array **)v74.fields.current.fields.value;
    v45 = sub_B170CC(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v68, v69, v70, v71);
    BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v45, 0LL);
    if ( !v45 )
      sub_B170D4();
    *(_QWORD *)(v45 + 16) = key;
    sub_B16F98((BattleServantConfConponent_o *)(v45 + 16), key, v46, v47, v48, v49, v50, v51);
    *(_QWORD *)(v45 + 24) = value;
    sub_B16F98((BattleServantConfConponent_o *)(v45 + 24), value, v52, v53, v54, v55, v56, v57);
    v58 = *v33;
    if ( !*v33 )
      sub_B170D4();
    v59 = sub_B170BC(v45, *(_QWORD *)(*(_QWORD *)v58 + 64LL));
    if ( !v59 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( v42 >= v58[6] )
    {
      sub_B17100(v59, v60, v61);
      sub_B170A0();
    }
    v67 = &v58[2 * v42];
    *((_QWORD *)v67 + 4) = v45;
    sub_B16F98((BattleServantConfConponent_o *)(v67 + 8), (System_Int32_array **)v45, v61, v62, v63, v64, v65, v66);
    ++v42;
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v74,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
LABEL_25:
  result = (BattlePerformanceBg_SaveData_o *)v17;
  *(_DWORD *)(v17 + 32) = this->fields.loadbgno;
  *(_DWORD *)(v17 + 36) = this->fields.loadbgType;
  return result;
}


bool __fastcall BattlePerformanceBg__get_IsBusy(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.IsLoading;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgNo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgType(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgType;
}


bool __fastcall BattlePerformanceBg__isReload(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno != -1 && this->fields.loadbgType != -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_o *AssetPass; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_40FC262 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B16FFC(&Method_BattlePerformanceBg_endloadBg__, v7);
    sub_B16FFC(&BattlePerformanceBg_TypeInfo, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_40FC262 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_11;
  this->fields.loadbgno = no;
  this->fields.loadbgType = tp;
  this->fields.newBgId = no;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = BattlePerformanceBg__GetAssetPass(no, *(const MethodInfo **)&no);
  this->fields.initLoadedBgPath = AssetPass;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)AssetPass,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19, v20);
  AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPass, v21, 1, 0LL) )
LABEL_11:
    this->fields.IsLoading = 0;
}


void __fastcall BattlePerformanceBg__playAnimation(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  BattleBgComponent_array *v12; // x21
  unsigned int v13; // w23
  Il2CppClass **v14; // x8
  BattleBgComponent_o *v15; // x22

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v12 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        sub_B17100(BattleBgComponents, v9, v10);
        sub_B170A0();
      }
      v14 = &v12->obj.klass + (int)v13;
      v15 = (BattleBgComponent_o *)v14[4];
      if ( !v15 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey(
                                                        (BattleBgComponent_o *)v14[4],
                                                        key,
                                                        0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v15, animName, timeline, 0LL);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FC272 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21405/*"playerfield"*/, method);
    sub_B16FFC(&StringLiteral_2769/*"BattleIn"*/, v4);
    byte_40FC272 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21405/*"playerfield"*/,
    (System_String_o *)StringLiteral_2769/*"BattleIn"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40FC271 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2771/*"BattleOut"*/, method);
    sub_B16FFC(&StringLiteral_21405/*"playerfield"*/, v4);
    byte_40FC271 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21405/*"playerfield"*/,
    (System_String_o *)StringLiteral_2771/*"BattleOut"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int max_length; // w8
  BattleBgComponent_array *v7; // x19
  unsigned int v8; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(BattleBgComponents, v4, v5);
        sub_B170A0();
      }
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  *outNo = this->fields.loadbgno;
  *outType = this->fields.loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, this->fields.loadbgType, method);
}


BattlePerformanceBg_BgState_o *__fastcall BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v15; // x8
  struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *historyBgState; // x0
  struct BattlePerformanceBg_BgState_o *v17; // x8
  struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *v18; // x0
  struct BattlePerformanceBg_BgState_o *v19; // x2
  struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *v20; // x0
  struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *v26; // x0
  __int64 v27; // x21
  struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *v28; // x0

  if ( (byte_40FC26F & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceBg_BgState_TypeInfo, inName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC26F = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
      goto LABEL_12;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
    {
LABEL_12:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v11);
      if ( !nowBgState )
        goto LABEL_32;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v15 = this->fields.nowBgState;
      if ( !v15 )
        goto LABEL_32;
      historyBgState = this->fields.historyBgState;
      if ( !historyBgState )
        goto LABEL_32;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)historyBgState,
             (System_Xml_XmlQualifiedName_o *)v15->fields.bgName,
             (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
      {
        v17 = this->fields.nowBgState;
        if ( !v17 )
          goto LABEL_32;
        v18 = this->fields.historyBgState;
        if ( !v18 )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
          (System_Xml_XmlQualifiedName_o *)v17->fields.bgName,
          (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v19 = this->fields.nowBgState;
      if ( !v19 )
        goto LABEL_32;
      v20 = this->fields.historyBgState;
      if ( !v20 )
        goto LABEL_32;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
        (System_Xml_XmlQualifiedName_o *)v19->fields.bgName,
        (System_Xml_Schema_XmlSchemaObject_o *)v19,
        (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0LL;
  v21 = this->fields.historyBgState;
  if ( !v21 )
LABEL_32:
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
          (System_Xml_XmlQualifiedName_o *)inName,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    v27 = sub_B170CC(BattlePerformanceBg_BgState_TypeInfo, v22, v23, v24, v25);
    BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v27, inName, 0LL);
    if ( v27 )
    {
      v28 = this->fields.historyBgState;
      if ( v28 )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v28,
          *(System_Xml_XmlQualifiedName_o **)(v27 + 16),
          (System_Xml_Schema_XmlSchemaObject_o *)v27,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
        return (BattlePerformanceBg_BgState_o *)v27;
      }
    }
    goto LABEL_32;
  }
  v26 = this->fields.historyBgState;
  if ( !v26 )
    goto LABEL_32;
  return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v26,
                                            (System_Type_o *)inName,
                                            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
}


void __fastcall BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  BattleBgComponent_array *v8; // x19
  unsigned int v9; // w21
  bool v10; // w20

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v8 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = flg;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(BattleBgComponents, v5, v6);
        sub_B170A0();
      }
      BattleBgComponents = (BattleBgComponent_array *)v8->m_Items[v9];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v10, 0LL);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v7; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v18; // x21
  int max_length; // w8
  unsigned int v20; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v21; // x25
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v23; // x0
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  BattleBgComponent_array *BattleBgComponents; // x0

  if ( (byte_40FC25C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, saveData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, v5);
    byte_40FC25C = 1;
  }
  if ( saveData )
  {
    this->fields.loadbgno = saveData->fields.bgNo;
    this->fields.loadbgType = saveData->fields.bgTp;
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v7 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, method);
        p_nowBgState = &this->fields.nowBgState;
        this->fields.nowBgState = v7;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.nowBgState,
          (System_Int32_array **)v7,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        v18 = saveData->fields.compSaveDataList;
        if ( !v18 )
          goto LABEL_21;
        max_length = v18->max_length;
        if ( max_length >= 1 )
        {
          v20 = 0;
          while ( 1 )
          {
            if ( v20 >= max_length )
            {
              sub_B17100(v15, v16, v17);
              sub_B170A0();
            }
            if ( !*p_nowBgState )
              break;
            v21 = v18->m_Items[v20];
            if ( !v21 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            v15 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                    compDictionary,
                    (System_Xml_XmlQualifiedName_o *)v21->fields.bgCompName,
                    (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( !v15 )
            {
              if ( !*p_nowBgState )
                break;
              v23 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !v23 )
                break;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                v23,
                (System_Xml_XmlQualifiedName_o *)v21->fields.bgCompName,
                (System_Xml_Schema_XmlSchemaObject_o *)v21->fields.bgCompData,
                (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v18->max_length;
            if ( (int)++v20 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_B170D4();
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v17);
        if ( !nowBgState )
          goto LABEL_21;
        BattlePerformanceBg_BgState__loadSaveData(nowBgState, BattleBgComponents, this->fields.actionCamera, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg_BgInfo___ctor(
        BattlePerformanceBg_BgInfo_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  BattlePerformanceBg_BgInfo_o *v20; // x24

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  v20 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v20->fields.callback = callback;
  v20 = (BattlePerformanceBg_BgInfo_o *)((char *)v20 + 56);
  LODWORD(v20[-1].fields.pos.fields.x) = No;
  LODWORD(v20[-1].fields.pos.fields.y) = tp;
  v20[-1].fields.pos.fields.z = v18;
  v20[-1].fields.rot.fields.x = v17;
  v20[-1].fields.rot.fields.y = v16;
  v20[-1].fields.rot.fields.z = x;
  *(float *)&v20[-1].fields.changeDirect = y;
  *(float *)(&v20[-1].fields.parentCamera + 3) = z;
  LOBYTE(v20[-1].fields.callback) = changeDirect;
  BYTE1(v20[-1].fields.callback) = parentCamera;
  sub_B16F98(v20, callback);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformanceBg_BgState_Fields *p_fields; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x20

  if ( (byte_40F716B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__, inName);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v5);
    byte_40F716B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  p_fields = &this->fields;
  sub_B16F98(p_fields, inName);
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo,
                                                                                        v7,
                                                                                        v8,
                                                                                        v9,
                                                                                        v10);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  p_fields->compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v11;
  sub_B16F98(&p_fields->compDictionary, v11);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_o *v6; // x21
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w24
  BattleBgComponent_o *v10; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x23
  System_String_o *name; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v13; // x23
  System_Type_o *v14; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  v6 = this;
  if ( (byte_40F716D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, list);
    this = (BattlePerformanceBg_BgState_o *)sub_B16FFC(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v7);
    byte_40F716D = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(this, list, actionCamera);
        sub_B170A0();
      }
      v10 = list->m_Items[v9];
      if ( !v10 )
        break;
      v10[1].klass = (BattleBgComponent_c *)actionCamera;
      sub_B16F98(&v10[1], actionCamera);
      if ( LOBYTE(v10->fields.motionKey) )
      {
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.compDictionary;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                  compDictionary,
                                                  (System_Xml_XmlQualifiedName_o *)name,
                                                  (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v13 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.compDictionary;
          v14 = (System_Type_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
          if ( !v13 )
            break;
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v13,
                   v14,
                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v10, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *compDictionary; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  signed int max_length; // w8
  unsigned int v11; // w24
  BattleBgComponent_o *v12; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v13; // x21
  System_String_o *name; // x23
  System_Xml_Schema_XmlSchemaObject_o *SaveData; // x0

  if ( (byte_40F716C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, list);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v5);
    byte_40F716C = 1;
  }
  compDictionary = this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)compDictionary,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v12 = list->m_Items[v11];
      if ( !v12 )
        break;
      if ( LOBYTE(v12->fields.motionKey) )
      {
        v13 = this->fields.compDictionary;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
        SaveData = (System_Xml_Schema_XmlSchemaObject_o *)BattleBgComponent__getSaveData(v12, 0LL);
        if ( !v13 )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
          (System_Xml_XmlQualifiedName_o *)name,
          SaveData,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceBg_ChangedBgArgs___ctor(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t bgNo,
        int32_t bgType,
        bool useParentCamera,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgNo_k__BackingField = bgNo;
  this->fields._UseParentCamera_k__BackingField = useParentCamera;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgNo_k__BackingField;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgType_k__BackingField;
}


bool __fastcall BattlePerformanceBg_ChangedBgArgs__get_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._UseParentCamera_k__BackingField;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgNo_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgType_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UseParentCamera_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_SaveData___ctor(BattlePerformanceBg_SaveData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  __int64 v6; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v7; // x1

  if ( (byte_40F716E & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_B16FFC(&string_TypeInfo, v3);
    byte_40F716E = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_B16F98(&this->fields, Empty);
  v7 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_B17014(
                                                                   BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                   0LL,
                                                                   v6);
  this->fields.compSaveDataList = v7;
  sub_B16F98(&this->fields.compSaveDataList, v7);
}


void __fastcall BattlePerformanceBg_SaveData_CompSaveData___ctor(
        BattlePerformanceBg_SaveData_CompSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___ctor(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___LoadBgSpShadowEffect_b__0(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___ctor(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  BattlePerformanceBg__endloadBgAll(_4__this, this->fields.data, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass67_0___ctor(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceBg___c__DisplayClass67_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}