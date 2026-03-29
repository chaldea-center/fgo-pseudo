void UISkinSprite___ctor(UISkinSprite_o *this, const MethodInfo *method)
{
  UISprite___ctor((UISprite_o *)this, 0);
}


System_String_o *UISkinSprite__GetReplaceSpriteName(
        UISkinSprite_o *this,
        int32_t uiChangeType,
        int32_t version,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  int klass; // w8
  int v9; // w24
  int32_t v10; // w22
  __int64 v11; // x1

  if ( (byte_4D322BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UISkinSprite_ReplaceData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UISkinSprite_ReplaceData__get_Item__);
    byte_4D322BE = 1;
  }
  result = (System_String_o *)this->fields.replaceDataList;
  if ( result )
  {
    klass = (int)result[1].klass;
    v9 = klass - 1;
    if ( klass < 1 )
    {
      return 0;
    }
    else
    {
      v10 = 0;
      while ( 1 )
      {
        result = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)result,
                                      v10,
                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UISkinSprite_ReplaceData__get_Item__);
        if ( !result )
          goto LABEL_19;
        if ( result->fields._stringLength == uiChangeType )
        {
          result = (System_String_o *)this->fields.replaceDataList;
          if ( !result )
            goto LABEL_19;
          result = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        v10,
                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UISkinSprite_ReplaceData__get_Item__);
          if ( !result )
            goto LABEL_19;
          if ( *(_DWORD *)&result->fields._firstChar == version )
            break;
        }
        if ( v9 == v10 )
          return 0;
        result = (System_String_o *)this->fields.replaceDataList;
        ++v10;
        if ( !result )
          goto LABEL_19;
      }
      result = (System_String_o *)this->fields.replaceDataList;
      if ( !result
        || (result = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          v10,
                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UISkinSprite_ReplaceData__get_Item__)) == 0 )
      {
LABEL_19:
        sub_1C93D2C(result, v11);
      }
      return (System_String_o *)result[1].klass;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *UISkinSprite__GetSpriteName(
        UISkinSprite_o *this,
        int32_t uiChangeType,
        bool ignoreOverwrite,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  TerminalOverwriteMaster_o *v8; // x21
  System_String_o *ReplaceSpriteName; // x21
  int32_t OverwriteUiVersion; // w0
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_string__o *spriteNameList; // x0
  TerminalOverwriteEntity_o *overwriteEntity; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *overwriteId; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D322BD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_TerminalOverwriteMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    byte_4D322BD = 1;
  }
  overwriteId = 0;
  overwriteEntity = 0;
  if ( !ignoreOverwrite )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TerminalOverwriteMaster___);
    if ( Master_object )
    {
      v8 = (TerminalOverwriteMaster_o *)Master_object;
      if ( !this->fields.isUseOverwriteType )
        goto LABEL_10;
      if ( TerminalOverwriteMaster__TryGetOverwriteId(
             (TerminalOverwriteMaster_o *)Master_object,
             this->fields.spriteOverwriteType,
             &overwriteId,
             &overwriteEntity,
             0) )
      {
        return overwriteId;
      }
      if ( !this->fields.isUseOverwriteType )
      {
LABEL_10:
        if ( TerminalOverwriteMaster__TryGetOverwriteSpriteName(v8, this->fields.skinType, &overwriteId, 0) )
          return overwriteId;
      }
    }
  }
  if ( this->fields.skinType != 7 )
    goto LABEL_16;
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  OverwriteUiVersion = ServantCommentManager__GetOverwriteUiVersion(0);
  ReplaceSpriteName = UISkinSprite__GetReplaceSpriteName(this, uiChangeType, OverwriteUiVersion, v11);
  if ( System_String__IsNullOrEmpty(ReplaceSpriteName, 0) )
  {
LABEL_16:
    spriteNameList = this->fields.spriteNameList;
    if ( !spriteNameList )
      sub_1C93D2C(0, *(_QWORD *)&uiChangeType);
    return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)spriteNameList,
                                uiChangeType,
                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
  }
  return ReplaceSpriteName;
}


void UISkinSprite__OnDisable(UISkinSprite_o *this, const MethodInfo *method)
{
  UIWidget__OnDisable((UIWidget_o *)this, 0);
  UISprite__set_atlas((UISprite_o *)this, 0, 0);
}


void UISkinSprite__OnEnable(UISkinSprite_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  UIRect__OnEnable((UIRect_o *)this, 0);
  UISkinSprite__setupSprite(this, 0, v3);
}


void UISkinSprite__setupSprite(UISkinSprite_o *this, bool ignoreOverwrite, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  UnityEngine_Object_o *v8; // x21
  void *Instance; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_string__o *spriteNameList; // x8
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_string__o *v13; // x8
  int32_t v14; // w1
  System_String_o *SpriteName; // x0

  if ( (byte_4D322BC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantCommentManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4D322BC = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C69B68(v3);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Equality(v8, 0, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    spriteNameList = this->fields.spriteNameList;
    if ( !spriteNameList )
      goto LABEL_26;
    if ( spriteNameList->fields._size )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
      if ( Instance )
      {
        if ( AtlasManager__SetSkinLocal((AtlasManager_o *)Instance, (UISprite_o *)this, this->fields.skinType, 0) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
          if ( Instance )
          {
            Instance = AtlasManager__getSkinAtlasData((AtlasManager_o *)Instance, this->fields.skinType, 0);
            if ( !Instance )
              goto LABEL_18;
            v13 = this->fields.spriteNameList;
            if ( v13 )
            {
              v14 = *((_DWORD *)Instance + 12);
              if ( v14 < v13->fields._size )
              {
LABEL_21:
                SpriteName = UISkinSprite__GetSpriteName(this, v14, ignoreOverwrite, v12);
LABEL_25:
                UISprite__set_spriteName((UISprite_o *)this, SpriteName, 0);
                return;
              }
LABEL_18:
              if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
              v14 = ServantCommentManager__GetIndexByChangeType(0);
              goto LABEL_21;
            }
          }
        }
        else
        {
          UISprite__set_atlas((UISprite_o *)this, this->fields.defaultAtlas, 0);
          Instance = this->fields.spriteNameList;
          if ( Instance )
          {
            SpriteName = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)Instance,
                                              0,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
            goto LABEL_25;
          }
        }
      }
LABEL_26:
      sub_1C93D2C(Instance, v10);
    }
  }
}


void UISkinSprite_ReplaceData___ctor(UISkinSprite_ReplaceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}