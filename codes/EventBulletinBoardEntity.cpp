void EventBulletinBoardEntity___ctor(EventBulletinBoardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970707 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970707 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventBulletinBoardEntity__CreatePrimaryKey(EventBulletinBoardEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventBulletinBoardEntity__GetFollowId(EventBulletinBoardEntity_o *this, const MethodInfo *method)
{
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x0
  int32_t v4; // w1
  System_Nullable_int__o v5; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970706 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity_BulletinBoardInfo___);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_5970706 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    script = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)script,
                                                                          (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity_BulletinBoardInfo___);
    if ( script )
    {
      v4 = (int32_t)script->m_Items[1];
      v5 = (System_Nullable_int__o)&v7;
      v7 = 0;
      System_Nullable_int____ctor(v5, v4, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
      LODWORD(script) = HIDWORD(v7);
    }
  }
  return (int)script;
}


bool EventBulletinBoardEntity__IsMatchMapId(
        EventBulletinBoardEntity_o *this,
        int32_t targetMapId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *script; // x0
  Il2CppObject *v6; // x0
  int32_t monitor_high; // w1
  System_Nullable_int__o v8; // x0
  int v9; // w8
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970705 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity_BulletinBoardInfo___);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_5970705 = 1;
  }
  script = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.script;
  if ( script
    && (v6 = System_Linq_Enumerable__FirstOrDefault_object_(
               script,
               (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity_BulletinBoardInfo___)) != 0 )
  {
    monitor_high = HIDWORD(v6[2].monitor);
    v8 = (System_Nullable_int__o)&v12;
    v12 = 0;
    System_Nullable_int____ctor(v8, monitor_high, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    v9 = HIDWORD(v12);
  }
  else
  {
    v9 = 0;
  }
  return !v9 || v9 == targetMapId;
}


void EventBulletinBoardEntity_BulletinBoardInfo___ctor(
        EventBulletinBoardEntity_BulletinBoardInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}