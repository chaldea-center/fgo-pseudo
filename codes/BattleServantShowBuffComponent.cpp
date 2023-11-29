void __fastcall BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FCD29 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40FCD29 = 1;
  }
  this->fields.maxLine = 2;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *Object; // x21
  const MethodInfo *v7; // x3
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x0

  if ( (byte_40FCD24 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    byte_40FCD24 = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0LL,
             0LL);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v7);
  if ( !Object )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Object,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_9;
  if ( datalist->max_length <= index )
  {
    sub_B17100(Component_srcLineSprite, v9, v10);
    sub_B170A0();
  }
  if ( !Component_srcLineSprite
    || (BattleServantBuffIconComponent__setIcon_22678936(Component_srcLineSprite, datalist->m_Items[index], 0LL),
        (objList = this->fields.objList) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleServantShowBuffComponent__HideBuffObject(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  int32_t v6; // w20
  int32_t size; // w8
  UnityEngine_GameObject_o *v8; // x0
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int32_t addOrder; // w10
  unsigned int v16; // w11
  BattleBuffData_ShowBuffData_o *v17; // x12

  if ( (byte_40FCD25 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_40FCD25 = 1;
  }
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_20;
  v6 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = objList->fields._items->m_Items[v6];
    if ( !v8 )
      goto LABEL_20;
    Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v8,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_20;
    nowBuff = Component_srcLineSprite->fields.nowBuff;
    if ( nowBuff )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_20;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        addOrder = nowBuff->fields.addOrder;
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= max_length )
          {
            sub_B17100(Component_srcLineSprite, v10, v11);
            sub_B170A0();
          }
          v17 = datalist->m_Items[v16];
          if ( !v17 )
            break;
          if ( addOrder == v17->fields.addOrder )
            goto LABEL_19;
          if ( (int)++v16 >= max_length )
            goto LABEL_18;
        }
LABEL_20:
        sub_B170D4();
      }
LABEL_18:
      BattleServantBuffIconComponent__setIcon_22678936(Component_srcLineSprite, 0LL, 0LL);
    }
LABEL_19:
    objList = this->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x24
  __int64 v8; // x21
  int size; // w8
  unsigned int v10; // w22
  UnityEngine_GameObject_o *v11; // x0
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v13; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_GameObject__o *v16; // x23

  if ( (byte_40FCD27 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_40FCD27 = 1;
  }
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_12;
  v8 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, index, method);
      return;
    }
    if ( size <= v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = (UnityEngine_GameObject_o *)*((_QWORD *)&objList->fields._items->obj.klass + v8);
    if ( !v11 )
      goto LABEL_12;
    Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v11,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_12;
    if ( !Component_srcLineSprite->fields.nowBuff )
      break;
    objList = this->fields.objList;
    ++v8;
    if ( !objList )
      goto LABEL_12;
  }
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( datalist->max_length <= index )
  {
    sub_B17100(Component_srcLineSprite, v13, method);
    sub_B170A0();
  }
  BattleServantBuffIconComponent__setIcon_22678936(Component_srcLineSprite, datalist->m_Items[index], 0LL);
  v16 = this->fields.objList;
  if ( !v16 )
LABEL_12:
    sub_B170D4();
  if ( v16->fields._size <= v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    this,
    *((UnityEngine_GameObject_o **)&v16->fields._items->obj.klass + v8),
    index,
    v15);
}


void __fastcall BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  __int64 v6; // x20
  int size; // w8
  UnityEngine_GameObject_o *v8; // x0
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0

  if ( (byte_40FCD28 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    byte_40FCD28 = 1;
  }
  objList = this->fields.objList;
  if ( !objList )
LABEL_13:
    sub_B170D4();
  v6 = 0LL;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = objList->fields._items->m_Items[v6];
    if ( v8 )
    {
      Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v8,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( Component_srcLineSprite )
      {
        if ( Component_srcLineSprite->fields.nowBuff )
          BattleServantBuffIconComponent__UpdateActiveBuff(Component_srcLineSprite, 0LL);
        objList = this->fields.objList;
        ++v6;
        if ( objList )
          continue;
      }
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x25
  __int64 v8; // x21
  int size; // w8
  unsigned int v10; // w24
  UnityEngine_GameObject_o *v11; // x0
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  BattleBuffData_ShowBuffData_o *v17; // x1
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_GameObject__o *v20; // x22

  if ( (byte_40FCD26 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    byte_40FCD26 = 1;
  }
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_16;
  v8 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= size )
      return 0;
    if ( size <= v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = (UnityEngine_GameObject_o *)*((_QWORD *)&objList->fields._items->obj.klass + v8);
    if ( !v11 )
      goto LABEL_16;
    Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v11,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !Component_srcLineSprite )
      goto LABEL_16;
    nowBuff = Component_srcLineSprite->fields.nowBuff;
    if ( nowBuff )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_16;
      if ( datalist->max_length <= index )
      {
        sub_B17100(Component_srcLineSprite, v13, v14);
        sub_B170A0();
      }
      v17 = datalist->m_Items[index];
      if ( !v17 )
        goto LABEL_16;
      if ( v17->fields.addOrder == nowBuff->fields.addOrder )
        break;
    }
    objList = this->fields.objList;
    ++v8;
    if ( !objList )
      goto LABEL_16;
  }
  BattleServantBuffIconComponent__setIcon_22678936(Component_srcLineSprite, v17, 0LL);
  v20 = this->fields.objList;
  if ( !v20 )
LABEL_16:
    sub_B170D4();
  if ( v20->fields._size <= v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    this,
    *((UnityEngine_GameObject_o **)&v20->fields._items->obj.klass + v8),
    index,
    v19);
  return 1;
}


void __fastcall BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxCount; // w21
  int maxLine; // w22
  UnityEngine_Transform_o *transform; // x0
  int v9; // w8
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        (transform = UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = index / maxCount;
  if ( index / maxCount > maxLine )
    v9 = maxLine;
  v10.fields.y = this->fields.addPos.fields.y * (float)v9;
  v10.fields.x = this->fields.addPos.fields.x * (float)(index % maxCount);
  v10.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v10, 0LL);
}


void __fastcall BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v16; // w21
  __int64 v17; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v20; // w10
  int v21; // w22
  struct System_Collections_Generic_List_GameObject__o *v22; // x26
  __int64 v23; // x24
  int v24; // w8
  UnityEngine_GameObject_o *v25; // x0
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  struct BattleBuffData_ShowBuffData_array *v30; // x9
  BattleBuffData_ShowBuffData_o *v31; // x9

  if ( (byte_40FCD23 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, buffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    byte_40FCD23 = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.datalist,
    (System_Int32_array **)buffList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v13);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_35;
  v16 = 0;
  while ( 1 )
  {
    v17 = *(_QWORD *)&datalist->max_length;
    if ( v16 >= (int)v17 )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_35;
    size = objList->fields._size;
    v20 = this->fields.maxLine * this->fields.maxCount;
    if ( v20 <= v16 )
      break;
    if ( size <= v16 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v16, v14);
    }
    else if ( !BattleServantShowBuffComponent__UpdateBuff(this, v16, v14) )
    {
      BattleServantShowBuffComponent__NewBuff(this, v16, v14);
    }
    datalist = *p_datalist;
    ++v16;
    if ( !*p_datalist )
      goto LABEL_35;
  }
  v21 = size - v20;
  if ( size - v20 >= 1 && v16 < (int)v17 )
  {
    while ( 1 )
    {
      v22 = this->fields.objList;
      if ( !v22 )
        break;
      v23 = 0LL;
      while ( 1 )
      {
        v24 = v22->fields._size;
        if ( (int)v23 >= v24 )
          break;
        if ( v24 <= (unsigned int)v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v25 = v22->fields._items->m_Items[v23];
        if ( !v25 )
          goto LABEL_35;
        Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v25,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !Component_srcLineSprite )
          goto LABEL_35;
        nowBuff = Component_srcLineSprite->fields.nowBuff;
        if ( nowBuff )
        {
          v30 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_35;
          if ( v16 >= v30->max_length )
          {
            sub_B17100(Component_srcLineSprite, v27, v28);
            sub_B170A0();
          }
          v31 = v30->m_Items[v16];
          if ( !v31 )
            goto LABEL_35;
          if ( nowBuff->fields.addOrder == v31->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_22678936(Component_srcLineSprite, 0LL, 0LL);
            --v21;
            break;
          }
        }
        v22 = this->fields.objList;
        ++v23;
        if ( !v22 )
          goto LABEL_35;
      }
      if ( !*p_datalist )
        break;
      if ( v21 >= 1 && ++v16 < (signed int)(*p_datalist)->max_length )
        continue;
      return;
    }
LABEL_35:
    sub_B170D4();
  }
}