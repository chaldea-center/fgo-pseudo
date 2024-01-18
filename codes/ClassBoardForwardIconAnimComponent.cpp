void __fastcall ClassBoardForwardIconAnimComponent___ctor(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_41894DD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19453/*"img_class_{0}"*/, method);
    sub_B2C35C(&StringLiteral_16984/*"btn_class"*/, v9);
    byte_41894DD = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_19453/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_19453/*"img_class_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.spriteNameFormatIcon, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_16984/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_16984/*"btn_class"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.spriteNameButton, v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__PlayAnim(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0LL), (v4 = this->fields.anim) == 0LL)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_B2C434(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0LL);
  UnityEngine_Animation__Play_50201580(v4, name, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  AtlasManagerUnit_o *sb; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v22; // x0
  __int64 v23; // x3
  IClassBoardResourceCatalog_c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int list; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41894DC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, resourceCatalog);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v8);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    byte_41894DC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    baseId,
                                                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    return;
  if ( !resourceCatalog )
    goto LABEL_27;
  klass = resourceCatalog->klass;
  v15 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v13);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(p_method + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  sb = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.sb;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  list = (int)v15->fields.list;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &list);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    spriteNameFormatIcon,
                                                                                    v22,
                                                                                    0LL);
  if ( !sb )
    goto LABEL_27;
  AtlasManagerUnit__SetUI(sb, classIconUi, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v24 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v26 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_21:
    v27 = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v23);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v27)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v27 + 8));
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier) == 0LL )
  {
LABEL_27:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}